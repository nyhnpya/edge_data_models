\mainpage EDGE Automation C++ API Documentation

The goal of this document is to provide a detailed overview of the Ensign EDGE Automation System API.  There should be enough information to enable disparete groups to develop applications for the EDGE Automation System.  This document will describe in detail all inputs, outputs and behavior of each available interfaces.  Each interface description provides the following detail:

* all date members in each interface
* type of each data member 
* description of each data member
* unit of measure, where applicable, each data member is expressed in.
* Qualitiy of Service (QoS) for each interfaces
  * termporal characteristics
  * spatial characteristics

## A Federated Approach - Data Centric Architectures

Federated systems are systems composed on distinct nonoverlapping roles.  This system is based around Data Centric principals which employs the following design principals.

* Weak Coupling
* Strong Cohesion
* Isolation of Concerns
* Locus of Control
* Domain of Authority
* Domain of Responsibility

Object oriented programming (OOP) changed the way we write and organize code, so that we can write larger, more complex and more maintainable code. While not perfect, it has proven to be an extremely versatile and intuitive way to describe application behavior.

Data Centric is opposite of Object Oriented.  In Object Oriented you hide the data and expose the methods.  In a data centric architecure you hide the methods and expose the data.  

## Communication Paradigm

All communication between the EDGE control system and the optimization applications will be expressed as normalized topics which use the DDS (Data Distribution Service) data-centric protocol to provide asynchronous communication.  Certain QoS (quality of service) attributes will be available for to the optimization applications to determine the quality of the data it is receiving as well as the state of the data it has requested.  These QoS attributes will allow the applications to specify specific events (or timers) for notification of data arrival, deadlines, etc.  A communication pattern known as Objective/State (similar to observer pattern) will be used to distribute objectives to the Rig Control System.  

For safety reasons all process level requests to the system are merely suggestions and the EDGE control system will decide if the request is within the specified safety margins.

\image html Ensign.png

### Objective/State

The objective/state pattern utilizes two actors.  One actor represents a requestor and the other represents an effector.  There can be a many-to-many relationship between requestors and effectors. This allows the communication between the Rig Control System (the control layer) and the Edge Process Automation Interface (the process layer) to be data-centric.  It also allows the process layer to remain agnostic about the underlying control system.  Focusing on the functional aspects of the system rather then detailed knowledge of how the Rig Control system functions.  Allows components to express intent and communicate about actions
* Allows additional observing components to leverage request, objective data
* Avoids tight application-to-application coupling of RPC-like (anti-)patterns
 

#### Objective State Pattern: Use Cases
* How can one party request that another party do something?
* How can a producer know that observers(s) have acted on its data?
* How can a producer observe the “result” of a remote action?

#### Requestor

A requestor is an actor which "requests" the resources of another actor.  A requestor makes a "request" by stating its intentions or publishing the intended state to the system.  The request is completely asynchronous which means that the requestor must observe the current state of the system to see if the request is being handled by the system.  Requestors perform the following responsibilities:

* publish requests to the system
* observe current state of the system

#### Effector

The effector is an actor which can satisfy the state of a requestor.  Effectors perform the following responsibilities:

* observe intended state changes
* publish the current state of the effector


## Safe Operations 

To ensure safe operation of the control system the platform solution **MUST** ensure that there is only every a single owner of the process and/or tool.  The platform must also ensure that any set-points presented to the system which fall outside the normal operating range will be disregarded by the system.  

### Single tool owner

To ensure safe operations of the system there can only ever be a single owner of the rig control system.  The driller **MUST** be presented a mechanism to easily switch between application and manual input.  

### Validation of set-points

Validation of set-points will take place at multiple levels.  First it is the responsibility of the optimization application to only send values within the constraints specified in the *State* interface.  Second the networker will be responsible for validating any input it receives from the application.  If a value is determined to be outside the safe operating limits then the networker will disregard the suggested set-points and not send them to the control system.  Finally it will be the responsibility of the control system to vet all set points it receives to ensure the values are within safe tool limits.


## Sequence Diagrams

This section details the various interactions of the system.

### ROP Optimization Interface - Cyclic Execution Cycle

This diagram depicts four state topics *DrillState*, *WellboreState*, *HoistSTate*, *RotateState*, *CirculateState* and one request topic *DrillRequest*.  The four state topics are updated by the controller when new data samples arrive from the EDGE control system.  The controller will monitor the state of the system and publish the *Objetive* topic based on the state of the system. 

\image html DrillApplication-Cyclic.png


\defgroup Interfaces Edge Automation Interfaces

\defgroup QOS Quality of Service (QoS)
 @{
    \ingroup Interfaces
 @}

\defgroup Request Request Interfaces 
 @{
    \ingroup Interfaces
 @}
  
\defgroup Objective Objective Interfaces
 @{
    \ingroup Interfaces
 @}
  
  
\defgroup Actual Actual State Interfaces
 @{
    \ingroup Interfaces
 @}

\defgroup Examples EDGE Programming Examples

  
