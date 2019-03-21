#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorAliasReference()
{
    py::class_< FBehaviorAliasReference >("FBehaviorAliasReference")
        .def_readwrite("BehaviorAlias", &FBehaviorAliasReference::BehaviorAlias)
        .def_readwrite("BehaviorList", &FBehaviorAliasReference::BehaviorList)
  ;
}