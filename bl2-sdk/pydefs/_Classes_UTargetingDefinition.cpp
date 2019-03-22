#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetingDefinition(py::module &m)
{
    py::class_< UTargetingDefinition,  UGBXDefinition   >(m, "UTargetingDefinition")
        .def_readwrite("Knowledge", &UTargetingDefinition::Knowledge)
        .def_readwrite("Prioritization", &UTargetingDefinition::Prioritization)
        .def_readwrite("CanTargetIf", &UTargetingDefinition::CanTargetIf)
        .def_readwrite("StopTargetingIf", &UTargetingDefinition::StopTargetingIf)
        .def_readwrite("CanTargetFriendliesIf", &UTargetingDefinition::CanTargetFriendliesIf)
        .def_readwrite("SearchRadius", &UTargetingDefinition::SearchRadius)
          ;
}