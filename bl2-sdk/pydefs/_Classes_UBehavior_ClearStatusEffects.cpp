#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ClearStatusEffects()
{
    class_< UBehavior_ClearStatusEffects, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ClearStatusEffects", no_init)
        .def("StaticClass", &UBehavior_ClearStatusEffects::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ClearStatusEffects::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}