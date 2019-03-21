#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQueuedPersonalEchoLog()
{
    py::class_< FQueuedPersonalEchoLog >("FQueuedPersonalEchoLog")
        .def_readwrite("Event", &FQueuedPersonalEchoLog::Event)
        .def_readwrite("Group", &FQueuedPersonalEchoLog::Group)
  ;
}