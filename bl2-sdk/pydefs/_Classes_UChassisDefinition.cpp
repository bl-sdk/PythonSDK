#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChassisDefinition(py::object m)
{
    py::class_< UChassisDefinition,  UGBXDefinition   >(m, "UChassisDefinition")
        .def_readwrite("VfTable_IIHitRegionInfoProvider", &UChassisDefinition::VfTable_IIHitRegionInfoProvider)
        .def_readwrite("BodyComposition", &UChassisDefinition::BodyComposition)
        .def_readwrite("DefaultHitRegion", &UChassisDefinition::DefaultHitRegion)
        .def_readwrite("HitRegionList", &UChassisDefinition::HitRegionList)
        .def_readwrite("DrivingPhysicalMaterial", &UChassisDefinition::DrivingPhysicalMaterial)
        .def_readwrite("DefaultPhysicalMaterial", &UChassisDefinition::DefaultPhysicalMaterial)
        .def_readwrite("ReverseSwitchName", &UChassisDefinition::ReverseSwitchName)
        .def_readwrite("BrakeSwitchName", &UChassisDefinition::BrakeSwitchName)
        .def_readwrite("HeadlightSwitchName", &UChassisDefinition::HeadlightSwitchName)
        .def_readwrite("ThrottleSwitchName", &UChassisDefinition::ThrottleSwitchName)
        .def_readwrite("TouchImpactDefinition", &UChassisDefinition::TouchImpactDefinition)
        .def_readwrite("UntouchImpactDefinition", &UChassisDefinition::UntouchImpactDefinition)
        .def_readwrite("SpawnCoordinatedEffect", &UChassisDefinition::SpawnCoordinatedEffect)
        .def_readwrite("DeSpawnCoordinatedEffect", &UChassisDefinition::DeSpawnCoordinatedEffect)
        .def_readwrite("StatusEffectSockets", &UChassisDefinition::StatusEffectSockets)
        .def_readwrite("StatusEffectParticleSystemTemplate", &UChassisDefinition::StatusEffectParticleSystemTemplate)
        .def("StaticClass", &UChassisDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetHitRegions", [](UChassisDefinition &self , TArray< class UBodyHitRegionDefinition* >* Regions) { class UBodyHitRegionDefinition** pyDefaultRegion = 0 ;   self.GetHitRegions(Regions, pyDefaultRegion); return py::make_tuple(*pyDefaultRegion); })
          ;
}