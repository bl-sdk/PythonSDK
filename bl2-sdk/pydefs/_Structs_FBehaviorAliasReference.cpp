#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorAliasReference()
{
    class_< FBehaviorAliasReference >("FBehaviorAliasReference", no_init)
        .def_readwrite("BehaviorAlias", &FBehaviorAliasReference::BehaviorAlias)
        .def_readwrite("BehaviorList", &FBehaviorAliasReference::BehaviorList)
  ;
}