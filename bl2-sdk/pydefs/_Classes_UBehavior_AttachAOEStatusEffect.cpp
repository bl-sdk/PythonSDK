#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AttachAOEStatusEffect()
{
    class_< UBehavior_AttachAOEStatusEffect, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AttachAOEStatusEffect", no_init)
        .def_readwrite("StatusEffectDamageType", &UBehavior_AttachAOEStatusEffect::StatusEffectDamageType)
        .def_readwrite("SaveReferenceName", &UBehavior_AttachAOEStatusEffect::SaveReferenceName)
        .def("StaticClass", &UBehavior_AttachAOEStatusEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AttachAOEStatusEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}