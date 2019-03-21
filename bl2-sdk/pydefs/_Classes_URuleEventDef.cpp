#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URuleEventDef()
{
    py::class_< URuleEventDef,  UGBXDefinition   >("URuleEventDef")
        .def_readwrite("EventDefName", &URuleEventDef::EventDefName)
        .def_readwrite("FlagActionOnEventTrigger", &URuleEventDef::FlagActionOnEventTrigger)
        .def("StaticClass", &URuleEventDef::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}