#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIBehaviorAliasProvider()
{
    class_< UIBehaviorAliasProvider, bases< UInterface >  , boost::noncopyable>("UIBehaviorAliasProvider", no_init)
        .def("StaticClass", &UIBehaviorAliasProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("BehaviorAlias_GetLookupDefinition", &UIBehaviorAliasProvider::BehaviorAlias_GetLookupDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}