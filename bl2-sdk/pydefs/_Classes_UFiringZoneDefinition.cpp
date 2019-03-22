#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringZoneDefinition(py::module &m)
{
    py::class_< UFiringZoneDefinition,  UGBXDefinition   >(m, "UFiringZoneDefinition")
        .def_readwrite("ZoneName", &UFiringZoneDefinition::ZoneName)
        .def_readwrite("OuterRimDistance", &UFiringZoneDefinition::OuterRimDistance)
        .def_readwrite("ZoneColor", &UFiringZoneDefinition::ZoneColor)
        .def_readwrite("FiringBehavior", &UFiringZoneDefinition::FiringBehavior)
          ;
}