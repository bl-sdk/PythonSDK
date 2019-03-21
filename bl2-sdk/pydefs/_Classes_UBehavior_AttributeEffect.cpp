#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AttributeEffect()
{
    class_< UBehavior_AttributeEffect, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AttributeEffect", no_init)
        .def_readwrite("AttributeEffect", &UBehavior_AttributeEffect::AttributeEffect)
        .def_readwrite("AttributeEffects", &UBehavior_AttributeEffect::AttributeEffects)
        .def("StaticClass", &UBehavior_AttributeEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AttributeEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}