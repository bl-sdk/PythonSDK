#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorAliasLookupDefinition()
{
    class_< UBehaviorAliasLookupDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBehaviorAliasLookupDefinition", no_init)
        .def_readwrite("BehaviorAliasList", &UBehaviorAliasLookupDefinition::BehaviorAliasList)
        .def("StaticClass", &UBehaviorAliasLookupDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("RunBehaviorAlias", &UBehaviorAliasLookupDefinition::RunBehaviorAlias)
        .staticmethod("StaticClass")
  ;
}