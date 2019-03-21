#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetExtraMuzzleEffect()
{
    class_< UBehavior_SetExtraMuzzleEffect, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetExtraMuzzleEffect", no_init)
        .def_readwrite("BulletFromClip", &UBehavior_SetExtraMuzzleEffect::BulletFromClip)
        .def_readwrite("Effect", &UBehavior_SetExtraMuzzleEffect::Effect)
        .def("StaticClass", &UBehavior_SetExtraMuzzleEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetExtraMuzzleEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}