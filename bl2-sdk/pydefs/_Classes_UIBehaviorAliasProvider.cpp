#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBehaviorAliasProvider(py::object m)
{
    py::class_< UIBehaviorAliasProvider,  UInterface   >(m, "UIBehaviorAliasProvider")
        .def("StaticClass", &UIBehaviorAliasProvider::StaticClass, py::return_value_policy::reference)
        .def("BehaviorAlias_GetLookupDefinition", &UIBehaviorAliasProvider::BehaviorAlias_GetLookupDefinition, py::return_value_policy::reference)
          ;
}