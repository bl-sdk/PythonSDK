#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDamageTypeDefinition()
{
    class_< UDamageTypeDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDamageTypeDefinition", no_init)
        .def("StaticClass", &UDamageTypeDefinition::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}