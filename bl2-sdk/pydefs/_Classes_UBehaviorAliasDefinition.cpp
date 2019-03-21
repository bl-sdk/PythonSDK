#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorAliasDefinition(py::object m)
{
    py::class_< UBehaviorAliasDefinition,  UGBXDefinition   >(m, "UBehaviorAliasDefinition")
        .def_readwrite("FallbackBehaviors", &UBehaviorAliasDefinition::FallbackBehaviors)
        .def("StaticClass", &UBehaviorAliasDefinition::StaticClass, py::return_value_policy::reference)
          ;
}