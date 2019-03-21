#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorAliasLookupDefinition()
{
    py::class_< UBehaviorAliasLookupDefinition,  UGBXDefinition   >("UBehaviorAliasLookupDefinition")
        .def_readwrite("BehaviorAliasList", &UBehaviorAliasLookupDefinition::BehaviorAliasList)
        .def("StaticClass", &UBehaviorAliasLookupDefinition::StaticClass, py::return_value_policy::reference)
        .def("RunBehaviorAlias", &UBehaviorAliasLookupDefinition::RunBehaviorAlias)
        .staticmethod("StaticClass")
  ;
}