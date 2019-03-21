#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDamagePipeline()
{
    class_< UDamagePipeline, bases< UObject >  , boost::noncopyable>("UDamagePipeline", no_init)
        .def_readwrite("DamageTypeDef", &UDamagePipeline::DamageTypeDef)
        .def_readwrite("ImpactDefinition", &UDamagePipeline::ImpactDefinition)
        .def_readwrite("DirectHitObject", &UDamagePipeline::DirectHitObject)
        .def_readwrite("PenetrationCount", &UDamagePipeline::PenetrationCount)
        .def_readwrite("DamageSummary", &UDamagePipeline::DamageSummary)
        .def_readwrite("BarrelSourceTime", &UDamagePipeline::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &UDamagePipeline::PlantSourceTime)
        .def("StaticClass", &UDamagePipeline::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetWouldBeHealedSomehowByFriendlyFire", &UDamagePipeline::GetWouldBeHealedSomehowByFriendlyFire)
        .def("SetPlantSourceTime", &UDamagePipeline::SetPlantSourceTime)
        .def("SetBarrelSourceTime", &UDamagePipeline::SetBarrelSourceTime)
        .def("GetPlantSourceTime", &UDamagePipeline::GetPlantSourceTime)
        .def("GetBarrelSourceTime", &UDamagePipeline::GetBarrelSourceTime)
        .def("SetPenetrationCount", &UDamagePipeline::SetPenetrationCount)
        .def("GetPenetrationCount", &UDamagePipeline::GetPenetrationCount)
        .def("GetOvercharged", &UDamagePipeline::GetOvercharged)
        .def("SetOvercharged", &UDamagePipeline::SetOvercharged)
        .def("GetCanInflictFriendlyFire", &UDamagePipeline::GetCanInflictFriendlyFire)
        .def("GetImpactDefinition", &UDamagePipeline::GetImpactDefinition, return_value_policy< reference_existing_object >())
        .def("GetDamageTypeDef", &UDamagePipeline::GetDamageTypeDef, return_value_policy< reference_existing_object >())
        .def("Initialize", &UDamagePipeline::Initialize)
        .def("ResetToDefaults", &UDamagePipeline::ResetToDefaults)
        .def("ConvertDamageToHealing", &UDamagePipeline::ConvertDamageToHealing)
        .def("AdjustDamage", &UDamagePipeline::AdjustDamage)
        .staticmethod("StaticClass")
  ;
}