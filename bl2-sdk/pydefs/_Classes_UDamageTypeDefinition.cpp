#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamageTypeDefinition(py::object m)
{
    py::class_< UDamageTypeDefinition,  UGBXDefinition   >(m, "UDamageTypeDefinition")
        .def("StaticClass", &UDamageTypeDefinition::StaticClass, py::return_value_policy::reference)
        .def("CalcRadiusDamageScale", &UDamageTypeDefinition::CalcRadiusDamageScale)
        .def("GetMinDamagePercent", &UDamageTypeDefinition::GetMinDamagePercent)
        .def("GetMinDamageRadius", &UDamageTypeDefinition::GetMinDamageRadius)
        .def("GetMaxDamageRadius", &UDamageTypeDefinition::GetMaxDamageRadius)
        .def("GetRigidBodyMomentumScale", &UDamageTypeDefinition::GetRigidBodyMomentumScale)
        .def("GetUpwardMomentumScale", &UDamageTypeDefinition::GetUpwardMomentumScale)
        .def("ApplyUpwardMomentum", &UDamageTypeDefinition::ApplyUpwardMomentum)
        .def("RecordRecentDamage", &UDamageTypeDefinition::RecordRecentDamage)
        .def("IsHealingDamageType", &UDamageTypeDefinition::IsHealingDamageType)
        .def("GetPawnDamageTypeModifier", &UDamageTypeDefinition::GetPawnDamageTypeModifier)
        .def("GetSurfaceDamageTypeModifier", &UDamageTypeDefinition::GetSurfaceDamageTypeModifier)
        .def("GetSurfaceMomentumTypeModifier", &UDamageTypeDefinition::GetSurfaceMomentumTypeModifier)
          ;
}