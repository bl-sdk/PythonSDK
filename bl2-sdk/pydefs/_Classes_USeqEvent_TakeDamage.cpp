#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_TakeDamage()
{
    py::class_< USeqEvent_TakeDamage,  USequenceEvent   >("USeqEvent_TakeDamage")
        .def_readwrite("MinDamageAmount", &USeqEvent_TakeDamage::MinDamageAmount)
        .def_readwrite("DamageThreshold", &USeqEvent_TakeDamage::DamageThreshold)
        .def_readwrite("DamageTypes", &USeqEvent_TakeDamage::DamageTypes)
        .def_readwrite("DamageTypeDefinitions", &USeqEvent_TakeDamage::DamageTypeDefinitions)
        .def_readwrite("IgnoreDamageTypes", &USeqEvent_TakeDamage::IgnoreDamageTypes)
        .def_readwrite("IgnoreDamageTypeDefinitions", &USeqEvent_TakeDamage::IgnoreDamageTypeDefinitions)
        .def_readwrite("CurrentDamage", &USeqEvent_TakeDamage::CurrentDamage)
        .def("StaticClass", &USeqEvent_TakeDamage::StaticClass, py::return_value_policy::reference)
        .def("eventToggled", &USeqEvent_TakeDamage::eventToggled)
        .def("eventGetObjClassVersion", &USeqEvent_TakeDamage::eventGetObjClassVersion)
        .def("Reset", &USeqEvent_TakeDamage::Reset)
        .def("eventHandleDamage", &USeqEvent_TakeDamage::eventHandleDamage)
        .def("IsValidDamageTypeDefinition", &USeqEvent_TakeDamage::IsValidDamageTypeDefinition)
        .def("IsValidDamageType", &USeqEvent_TakeDamage::IsValidDamageType)
        .staticmethod("StaticClass")
  ;
}