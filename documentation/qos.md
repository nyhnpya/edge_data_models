\ingroup QOS

# Quality of Service

<div id='table_of_contents'/>
## Table of contents
1. [Quality of Service (QoS)] (#quality_of_service)
   1. [Reliability Policy] (#reliability_policy)
   2. [Durability Policy] (#durability_policy)


<div id='qos'/>
## Quality of Service

###Policies

The following QoS policies will be supported in the first release of the interface.  These QoS policies are configurable at runtime.  The policies should not be baked into the code but set by the consumer of the data.

<div id='reliability_policy' />
#### Reliability Policies

Reliability controls the guarantee of packet delivery as well as historical persistence.

For some use cases, such as the periodic update of sensor values to a GUI displaying the value to a person, "best effort" delivery is often good enough. It is certainly the fastest, most efficient, and least resource-intensive (CPU and network bandwidth) method of getting the newest/latest value for a topic from DataWriters to DataReaders. But there is no guarantee that the data sent will be received. It may be lost due to a variety of factors, including data loss by the physical transport such as wireless RF or even Ethernet. Packets received out of order are dropped and a SAMPLE_LOST Status is generated.
However, there are data streams (topics) in which you want an absolute guarantee that all data sent by a DataWriter is received reliably by DataReaders. This means that Connext DDS must check whether or not data was received, and repair any data that was lost by resending a copy of the data as many times as it takes for the DataReader to receive the data.

* *Reliability* - Specifies whether or not DDS will deliver data reliably.
* *History* - Specifies how much data must be stored by the middleware.

<div id='durability_policy' />
#### Durability Policies

Because the publish-subscribe paradigm is connectionless, applications can create publications and subscriptions in any way they choose. As soon as a matching pair of DataWriters and DataReaders exist, then data published by the DataWriter will be delivered to the DataReader. However, a DataWriter may publish data before a DataReader has been created. For example, before you subscribe to a magazine, there have been past issues that were published.

This Qos Policy can be used to help ensure that DataReaders get all data that was sent by DataWriters, regardless of when it was sent. This QosPolicy can increase system tolerance to failure conditions.  The following options are available for durability:

* *Volatile Durability* - Do not save or deliver old data samples.
* *Transient Local* - Save and deliver old data samples if the publishing application still exists.
* *Transient Durability* - Save and deliver old data samples using a memory-based service.
* *Persistence Durability* - Save and deliver old data samples using disk-based service.

#### QoS Events

* *OnDataAvailable* - Mechanism to notify a subscriber when new data is available for reading.             
* *OnLivelinessLost* - Mechanism to notify a subscriber that a producer of data is no longer valid. Does not tell us why the DataWrtier is no longer available.
* *OnDeadlineMissed* - Mechanism to notify a subscriber that the expected deadline for a new data sample has expired.
* *OnDataDisposed* - Mechanism to notify a subscriber that the DataWriter has disposed of the topic instance.  This instnace will never be seen again
* *OnPublicationMatched* - Mechanism to notify a subscriber that a new publisher is available.

##### OnDataAvailable

The *OnDataAvailable* QoS policy requests a specific mechanism to be notified when new samples of data arrive.  The subscribing application may want to act immediately on new data samples.  This mechanism allows the subscribing application to base arrival of data on events rather than traditional polling mechanisms.  The SAMPLE_INFO structure will inform the subscribing application about the validity of the data sample.

##### OnLivelinessLost

The *OnLivelinessLost* QoS policy requests a specific mechanism for the publishing application to maintain the liveliness of all subscribing entities. The subscribing application may want to know that the publishing application is explicitly asserting the liveliness of the matching DataWriter rather than inferring its liveliness.  The subscribers lease duration specifies the maximum period at which matching Publishers must have their liveliness asserted. In addition, in the subscribing application DDS uses an internal thread that wakes up at the period set by the subscribers lease duration to see if the publishers lease_duration has been violated.

##### OnDeadlineMissed

This *OnDeadlineMissed* QoS policy states the maximum period in which the application expects to receive new values for the Topic. The application may receive data faster than the rate set by this QoS policy.  You can use this QoS policy during system integration to ensure that applications have been coded to meet design specifications. You can also use it during run time to detect when systems are performing outside of design specifications. Receiving applications can take appropriate actions to prevent total system failure when data is not received in time. For topics on which data is not expected to be periodic, the deadline period should be set to an infinite value.

##### OnPublicationMatched

This *OnPublicationMatched* QoS policy informs the subscriber that a publisher is now available in the system.  This QoS policy can be used to inform the application the state of the system.  If there is a publisher available 
