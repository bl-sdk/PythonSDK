#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FQueuedPersonalEchoLog()
{
    class_< FQueuedPersonalEchoLog >("FQueuedPersonalEchoLog", no_init)
        .def_readwrite("Event", &FQueuedPersonalEchoLog::Event)
        .def_readwrite("Group", &FQueuedPersonalEchoLog::Group)
  ;
}