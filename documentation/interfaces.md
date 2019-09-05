

<div id='interfaces' />
# Interfaces 

This section details the interfaces that are available in the EDGE Process Automation Applicaiton Programming Interface (API).  Interfaces are broken into three types of state:  *Request*, *Objective* and *State*.  

* ***Request*** used to infer state to the environment.  
* ***Objective*** used to observe the current system objective.
* ***State*** used to observe the current world state. 

Iterfaces 

* Ephemeral
* Persistent

<div id='anatomy_of_interface' />
## Anatomy of an Interface

*Request* and *State*  always have the following framework data members *id*, *objective id*, *estimated duration* , and *timestamp*.  The *id* is the unique id of the requester. The *objective id* is the unique id of the current rig state objective.  The *id* is the primary key of the topic and is used to differentiate this topic from other topics of the same type.  The *timestamp* is the time the data sample was published.  At the time of delivery the framework will take the timestamp from the sample metadata that was produced by the publisher and store it in the sample.  This is done to allow the consumer of the data the opportunity to make queries on the samples based on a specified time series. The *estimated duration* is the expected time the requestor will need the resource.  

<div id='units' />
### Units

All units are specified in derived SI.  The current SDK forces an explicit unit convresion to the proper type at compile time.  This mechanism ensures that the data is always expressed in the proper unit when it is put on the data-bus.  Specifying a standard base unit system allows the consumer of the data to easily and dynamically determine a unit without affecting the interface.

