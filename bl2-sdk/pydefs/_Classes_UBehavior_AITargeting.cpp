#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AITargeting()
{
    class_< UBehavior_AITargeting, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AITargeting", no_init)
        .def_readwrite("NewTargetingDefinition", &UBehavior_AITargeting::NewTargetingDefinition)
        .def("StaticClass", &UBehavior_AITargeting::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AITargeting::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}