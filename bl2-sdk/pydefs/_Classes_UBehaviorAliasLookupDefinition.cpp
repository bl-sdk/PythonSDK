#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorAliasLookupDefinition(py::module &m)
{
    py::class_< UBehaviorAliasLookupDefinition,  UGBXDefinition   >(m, "UBehaviorAliasLookupDefinition")
        .def_readwrite("BehaviorAliasList", &UBehaviorAliasLookupDefinition::BehaviorAliasList)
        .def("StaticClass", &UBehaviorAliasLookupDefinition::StaticClass, py::return_value_policy::reference)
        .def("RunBehaviorAlias", &UBehaviorAliasLookupDefinition::RunBehaviorAlias)
          ;
}