#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_TakeHitRegionDamage(py::module &m)
{
    py::class_< USeqEvent_TakeHitRegionDamage,  USequenceEvent   >(m, "USeqEvent_TakeHitRegionDamage")
		.def_static("StaticClass", &USeqEvent_TakeHitRegionDamage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MinDamageAmount", &USeqEvent_TakeHitRegionDamage::MinDamageAmount)
        .def_readwrite("DamageThreshold", &USeqEvent_TakeHitRegionDamage::DamageThreshold)
        .def_readwrite("DamageTypes", &USeqEvent_TakeHitRegionDamage::DamageTypes)
        .def_readwrite("DamageTypeDefinitions", &USeqEvent_TakeHitRegionDamage::DamageTypeDefinitions)
        .def_readwrite("IgnoreDamageTypes", &USeqEvent_TakeHitRegionDamage::IgnoreDamageTypes)
        .def_readwrite("IgnoreDamageTypeDefinitions", &USeqEvent_TakeHitRegionDamage::IgnoreDamageTypeDefinitions)
        .def_readwrite("DamageHitRegion", &USeqEvent_TakeHitRegionDamage::DamageHitRegion)
        .def_readwrite("CurrentDamage", &USeqEvent_TakeHitRegionDamage::CurrentDamage)
        .def("Reset", &USeqEvent_TakeHitRegionDamage::Reset)
        .def("HandleDamage", &USeqEvent_TakeHitRegionDamage::HandleDamage)
        .def("IsValidDamageTypeDefinition", &USeqEvent_TakeHitRegionDamage::IsValidDamageTypeDefinition)
        .def("IsValidDamageType", &USeqEvent_TakeHitRegionDamage::IsValidDamageType)
          ;
}