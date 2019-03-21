#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponGlowEffectDefinition()
{
    class_< UWeaponGlowEffectDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWeaponGlowEffectDefinition", no_init)
        .def_readwrite("GlowScaleCurve", &UWeaponGlowEffectDefinition::GlowScaleCurve)
        .def("StaticClass", &UWeaponGlowEffectDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}