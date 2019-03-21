#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDamageCauser()
{
    class_< UIDamageCauser, bases< UInterface >  , boost::noncopyable>("UIDamageCauser", no_init)
        .def("StaticClass", &UIDamageCauser::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetControllerResponsibleForDamage", &UIDamageCauser::GetControllerResponsibleForDamage, return_value_policy< reference_existing_object >())
        .def("GetInstigator", &UIDamageCauser::GetInstigator, return_value_policy< reference_existing_object >())
        .def("GetInstigatorSelfDamageScale", &UIDamageCauser::GetInstigatorSelfDamageScale)
        .def("GetFireIntervalChanceModifier", &UIDamageCauser::GetFireIntervalChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &UIDamageCauser::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectChanceModifier", &UIDamageCauser::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseDamage", &UIDamageCauser::GetStatusEffectBaseDamage)
        .staticmethod("StaticClass")
  ;
}