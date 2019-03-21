#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamagePipeline()
{
    py::class_< UDamagePipeline,  UObject   >("UDamagePipeline")
        .def_readwrite("DamageTypeDef", &UDamagePipeline::DamageTypeDef)
        .def_readwrite("ImpactDefinition", &UDamagePipeline::ImpactDefinition)
        .def_readwrite("DirectHitObject", &UDamagePipeline::DirectHitObject)
        .def_readwrite("PenetrationCount", &UDamagePipeline::PenetrationCount)
        .def_readwrite("DamageSummary", &UDamagePipeline::DamageSummary)
        .def_readwrite("BarrelSourceTime", &UDamagePipeline::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &UDamagePipeline::PlantSourceTime)
        .def("StaticClass", &UDamagePipeline::StaticClass, py::return_value_policy::reference)
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
        .def("GetImpactDefinition", &UDamagePipeline::GetImpactDefinition, py::return_value_policy::reference)
        .def("GetDamageTypeDef", &UDamagePipeline::GetDamageTypeDef, py::return_value_policy::reference)
        .def("Initialize", &UDamagePipeline::Initialize)
        .def("ResetToDefaults", &UDamagePipeline::ResetToDefaults)
        .def("ConvertDamageToHealing", &UDamagePipeline::ConvertDamageToHealing)
        .def("AdjustDamage", &UDamagePipeline::AdjustDamage)
        .staticmethod("StaticClass")
  ;
}