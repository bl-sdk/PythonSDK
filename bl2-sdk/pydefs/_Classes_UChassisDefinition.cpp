#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChassisDefinition()
{
    class_< UChassisDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UChassisDefinition", no_init)
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
        .def("StaticClass", &UChassisDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetHitRegions", &UChassisDefinition::GetHitRegions)
        .staticmethod("StaticClass")
  ;
}