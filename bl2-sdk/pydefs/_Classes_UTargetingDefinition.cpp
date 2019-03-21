#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetingDefinition()
{
    py::class_< UTargetingDefinition,  UGBXDefinition   >("UTargetingDefinition")
        .def_readwrite("Knowledge", &UTargetingDefinition::Knowledge)
        .def_readwrite("Prioritization", &UTargetingDefinition::Prioritization)
        .def_readwrite("CanTargetIf", &UTargetingDefinition::CanTargetIf)
        .def_readwrite("StopTargetingIf", &UTargetingDefinition::StopTargetingIf)
        .def_readwrite("CanTargetFriendliesIf", &UTargetingDefinition::CanTargetFriendliesIf)
        .def_readwrite("SearchRadius", &UTargetingDefinition::SearchRadius)
        .def("StaticClass", &UTargetingDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}