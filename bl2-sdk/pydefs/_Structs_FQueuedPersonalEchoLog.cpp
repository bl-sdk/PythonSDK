#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQueuedPersonalEchoLog(py::module &m)
{
    py::class_< FQueuedPersonalEchoLog >(m, "FQueuedPersonalEchoLog")
        .def_readwrite("Event", &FQueuedPersonalEchoLog::Event)
        .def_readwrite("Group", &FQueuedPersonalEchoLog::Group)
  ;
}