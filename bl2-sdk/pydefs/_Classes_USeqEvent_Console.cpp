#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_Console(py::object m)
{
    py::class_< USeqEvent_Console,  USequenceEvent   >(m, "USeqEvent_Console")
        .def_readwrite("ConsoleEventName", &USeqEvent_Console::ConsoleEventName)
        .def_readwrite("EventDesc", &USeqEvent_Console::EventDesc)
        .def("StaticClass", &USeqEvent_Console::StaticClass, py::return_value_policy::reference)
          ;
}