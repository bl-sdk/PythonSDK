#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAwarenessZoneDefinition(py::object m)
{
    py::class_< UWillowAwarenessZoneDefinition,  UAwarenessZoneDefinition   >(m, "UWillowAwarenessZoneDefinition")
        .def_readwrite("ThreatLevel", &UWillowAwarenessZoneDefinition::ThreatLevel)
        .def("StaticClass", &UWillowAwarenessZoneDefinition::StaticClass, py::return_value_policy::reference)
          ;
}