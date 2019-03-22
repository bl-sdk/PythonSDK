#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URuleEventDef(py::module &m)
{
    py::class_< URuleEventDef,  UGBXDefinition   >(m, "URuleEventDef")
        .def_readwrite("EventDefName", &URuleEventDef::EventDefName)
        .def_readwrite("FlagActionOnEventTrigger", &URuleEventDef::FlagActionOnEventTrigger)
          ;
}