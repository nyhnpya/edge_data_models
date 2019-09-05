\ingroup Examples 

# EDGE SDK Examples

## TOC
* [Repository Access](#respositary-access)
* [Environment Variables](#environment-variables)
* [Prerequisites](#prerequisites)
* [Code Examples](#code-examples)
* [EDGE Automation API](#edge-automation-api)

## Repository Access

The EDGE Automation APT repository is a collection of deb development packages required to develop applications for the EDGE Automation Platform.

### Repository Configuration

The following command will add the correct URL and GPG key to your APT source list

`sudo wget -q -O -http://edge.carrierlabs.com/repo/KEY.gpg | sudo apt-key add -`




## Environment Variables

Make sure the following environment variables are defined in .bashrc (or equivilant) file.

**MAKEDIRHOME** - location of Ensign EDGE build tools package. (e.g. /home/user/Makefiles)<br>
**NDDSHOME** - directory where DDS is installed (e.g. /opt/rti_connext_dds-5.3.1/) <br>
**NDDSARCH** - directory where DDS development libraries are installed (e.g. x64Linux3gcc.5.4.0) <br>

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
### Logging

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

### Units

### Data Model
