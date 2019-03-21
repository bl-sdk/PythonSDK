#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationDefinition()
{
    py::class_< UWillowPopulationDefinition,  UPopulationDefinition   >("UWillowPopulationDefinition")
        .def_readwrite("AIDef", &UWillowPopulationDefinition::AIDef)
        .def_readwrite("ClanDefinition", &UWillowPopulationDefinition::ClanDefinition)
        .def("StaticClass", &UWillowPopulationDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}