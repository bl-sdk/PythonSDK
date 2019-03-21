#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorAliasReference(py::object m)
{
    py::class_< FBehaviorAliasReference >(m, "FBehaviorAliasReference")
        .def_readwrite("BehaviorAlias", &FBehaviorAliasReference::BehaviorAlias)
        .def_readwrite("BehaviorList", &FBehaviorAliasReference::BehaviorList)
  ;
}