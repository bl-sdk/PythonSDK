#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHitRegionHelper(py::module &m)
{
    py::class_< UHitRegionHelper,  UObject   >(m, "UHitRegionHelper")
		.def_static("StaticClass", &UHitRegionHelper::StaticClass, py::return_value_policy::reference)
        .def_readwrite("HitRegionDamageList", &UHitRegionHelper::HitRegionDamageList)
        .def("PlayHit", &UHitRegionHelper::PlayHit)
        .def("ResetHitRegionHealth", &UHitRegionHelper::ResetHitRegionHealth)
        .def("HealDamageOnHitRegion", &UHitRegionHelper::HealDamageOnHitRegion)
        .def("GetBoneNameFromHitComponent", &UHitRegionHelper::GetBoneNameFromHitComponent)
        .def("GetHitRegionFromInstanceData", &UHitRegionHelper::GetHitRegionFromInstanceData, py::return_value_policy::reference)
        .def("GetHitRegionFromBoneName", &UHitRegionHelper::GetHitRegionFromBoneName, py::return_value_policy::reference)
        .def("GetHitRegionForTakenDamage", &UHitRegionHelper::GetHitRegionForTakenDamage, py::return_value_policy::reference)
        .def("GetHealthValuesForOwner", &UHitRegionHelper::GetHealthValuesForOwner)
        .def("AddDamageToHitRegion", &UHitRegionHelper::AddDamageToHitRegion)
        .def("RecordRecentDamageToHitRegion", &UHitRegionHelper::RecordRecentDamageToHitRegion)
        .def("PlayHealing", &UHitRegionHelper::PlayHealing)
        .def("PlayDamage", &UHitRegionHelper::PlayDamage)
        .def("PlayReplicatedDamage", &UHitRegionHelper::PlayReplicatedDamage)
        .def("GetHitRegionHealthValues", &UHitRegionHelper::GetHitRegionHealthValues)
          ;
}