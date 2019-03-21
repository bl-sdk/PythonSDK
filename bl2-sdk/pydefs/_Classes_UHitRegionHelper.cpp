#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHitRegionHelper()
{
    class_< UHitRegionHelper, bases< UObject >  , boost::noncopyable>("UHitRegionHelper", no_init)
        .def_readwrite("HitRegionDamageList", &UHitRegionHelper::HitRegionDamageList)
        .def("StaticClass", &UHitRegionHelper::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayHit", &UHitRegionHelper::PlayHit)
        .def("ResetHitRegionHealth", &UHitRegionHelper::ResetHitRegionHealth)
        .def("HealDamageOnHitRegion", &UHitRegionHelper::HealDamageOnHitRegion)
        .def("GetBoneNameFromHitComponent", &UHitRegionHelper::GetBoneNameFromHitComponent)
        .def("GetHitRegionFromInstanceData", &UHitRegionHelper::GetHitRegionFromInstanceData, return_value_policy< reference_existing_object >())
        .def("GetHitRegionFromBoneName", &UHitRegionHelper::GetHitRegionFromBoneName, return_value_policy< reference_existing_object >())
        .def("GetHitRegionForTakenDamage", &UHitRegionHelper::GetHitRegionForTakenDamage, return_value_policy< reference_existing_object >())
        .def("GetHealthValuesForOwner", &UHitRegionHelper::GetHealthValuesForOwner)
        .def("AddDamageToHitRegion", &UHitRegionHelper::AddDamageToHitRegion)
        .def("RecordRecentDamageToHitRegion", &UHitRegionHelper::RecordRecentDamageToHitRegion)
        .def("PlayHealing", &UHitRegionHelper::PlayHealing)
        .def("PlayDamage", &UHitRegionHelper::PlayDamage)
        .def("PlayReplicatedDamage", &UHitRegionHelper::PlayReplicatedDamage)
        .def("GetHitRegionHealthValues", &UHitRegionHelper::GetHitRegionHealthValues)
        .staticmethod("StaticClass")
  ;
}