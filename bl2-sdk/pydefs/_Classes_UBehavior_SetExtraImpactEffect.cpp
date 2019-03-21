#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetExtraImpactEffect()
{
    class_< UBehavior_SetExtraImpactEffect, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetExtraImpactEffect", no_init)
        .def_readwrite("BulletFromClip", &UBehavior_SetExtraImpactEffect::BulletFromClip)
        .def_readwrite("ImpactDefinition", &UBehavior_SetExtraImpactEffect::ImpactDefinition)
        .def("StaticClass", &UBehavior_SetExtraImpactEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetExtraImpactEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}