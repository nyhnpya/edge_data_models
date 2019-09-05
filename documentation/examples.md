\ingroup Examples 

# EDGE SDK Examples

These "Programming Examples" illustrate how to utilize the Enign Automation API's to integrate drilling applcations into the system.

These are a good starting point to familiarize yourself with the automation platform. You can use these code fragments as "templates" for writing your own code

\defgroup Repository Repository Access
 @{
    \ingroup Examples

The EDGE Automation APT repository is a collection of deb development packages required to develop applications for the EDGE Automation Platform.

### Repository Configuration

The following command will add the correct URL and GPG key to your APT source list

`sudo wget -q -O -http://edge.carrierlabs.com/repo/KEY.gpg | sudo apt-key add -`


 @}

\defgroup Environment Environment Variables
 @{
    \ingroup Examples

Make sure the following environment variables are defined in .bashrc (or equivilant) file.

* **MAKEFILEHOME** - location of Ensign EDGE build tools package. (e.g. /home/user/Makefiles)
* **NDDSHOME** - directory where DDS is installed (e.g. /opt/rti_connext_dds-5.3.1/)
* **NDDSARCH** - directory where DDS development libraries are installed (e.g. x64Linux3gcc.5.4.0)

 @}

## Prerequisites

| Package                  | Description                                                   |
| ------------------------ | --------------------------------------------------------------|
| edge_build\_env           | Ensign EDGE build tools                                       |
| libdds_base-dev          | Ensign EDGE DDS base                                          |
| libedge_third\_party-dev  | Ensign EDGE third party dependencies                          |
| liblogger-dev            | Ensign EDGE logging library                                   |

## Code Examples

| Example              | Description                                                   |
| -------------------- | --------------------------------------------------------------|
| hoist_subscriber     | Example exercising EDGE SDK Hoist Subscriber                  |
| objective_subscriber | Example exercising EDGE SDK Objective Subscriber              |
| rotate_subscriberm   | Example exercising EDGE SDK Rotate Subscriber                 |
| drilling_algorithm   | Example exercising EDGE SDK Drilling Algorithm                |


## EDGE Automation API
This section details the EDGE Automation API.

\defgroup Logging Logging Example
 @{
    \ingroup Examples

Ensign EDGE logging library is built on top of the log4cplus library.

#### API

 * **LOG_DEBUG();** - used to log debug events within the process
 * **LOG_INFO();** - used to log standard process events.
 * **LOG_WARN();** - used to log messages which result in a warning condition.
 * **LOG_ERROR();** - used to log messages which result in some type of event which occurs outside of the nominal boundaries of a the system.
 * **LOG_FATAL();** - used to log errors which cause a process to terminate.

#### Example

```C++
#include “logger.h”

int main(int argc, char *argv[])
{
    int variable = 7;

    LOG_DEBUG(“Beginning execution”);
    LOG_INFO(“variable = [%d]”, variable);
    LOG_DEBUG(“Ending execution”);
}
```
 @}
  

### Units

### Data Model
