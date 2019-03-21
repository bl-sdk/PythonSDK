#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBehaviorAliasProvider()
{
    py::class_< UIBehaviorAliasProvider,  UInterface   >("UIBehaviorAliasProvider")
        .def("StaticClass", &UIBehaviorAliasProvider::StaticClass, py::return_value_policy::reference)
        .def("BehaviorAlias_GetLookupDefinition", &UIBehaviorAliasProvider::BehaviorAlias_GetLookupDefinition, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}