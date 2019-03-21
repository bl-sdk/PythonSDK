#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIHitRegionConsumer()
{
    class_< UIHitRegionConsumer, bases< UInterface >  , boost::noncopyable>("UIHitRegionConsumer", no_init)
        .def("StaticClass", &UIHitRegionConsumer::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayHit", &UIHitRegionConsumer::PlayHit)
        .def("ResetHitRegionHealth", &UIHitRegionConsumer::ResetHitRegionHealth)
        .def("HealDamageOnHitRegion", &UIHitRegionConsumer::HealDamageOnHitRegion)
        .def("PlayHealingReaction", &UIHitRegionConsumer::PlayHealingReaction)
        .def("PlayDamageReaction", &UIHitRegionConsumer::PlayDamageReaction)
        .def("ReplicateDamageEffect", &UIHitRegionConsumer::ReplicateDamageEffect)
        .def("AddDamageToHitRegion", &UIHitRegionConsumer::AddDamageToHitRegion)
        .def("GetHitRegionHealthValues", &UIHitRegionConsumer::GetHitRegionHealthValues)
        .def("GetHitRegionForTakenDamage", &UIHitRegionConsumer::GetHitRegionForTakenDamage, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}