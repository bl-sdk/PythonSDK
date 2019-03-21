#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorAliasDefinition()
{
    py::class_< UBehaviorAliasDefinition,  UGBXDefinition   >("UBehaviorAliasDefinition")
        .def_readwrite("FallbackBehaviors", &UBehaviorAliasDefinition::FallbackBehaviors)
        .def("StaticClass", &UBehaviorAliasDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}