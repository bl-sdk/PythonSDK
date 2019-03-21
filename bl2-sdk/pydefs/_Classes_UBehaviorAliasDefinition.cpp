#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorAliasDefinition()
{
    class_< UBehaviorAliasDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBehaviorAliasDefinition", no_init)
        .def_readwrite("FallbackBehaviors", &UBehaviorAliasDefinition::FallbackBehaviors)
        .def("StaticClass", &UBehaviorAliasDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}