#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterClassDefinition(py::module &m)
{
    py::class_< UCharacterClassDefinition,  UGBXDefinition   >(m, "UCharacterClassDefinition")
        .def_readwrite("GroundSpeed", &UCharacterClassDefinition::GroundSpeed)
        .def_readwrite("AirSpeed", &UCharacterClassDefinition::AirSpeed)
        .def_readwrite("WalkingPct", &UCharacterClassDefinition::WalkingPct)
        .def_readwrite("SprintingPct", &UCharacterClassDefinition::SprintingPct)
        .def_readwrite("JumpZ", &UCharacterClassDefinition::JumpZ)
        .def_readwrite("CrouchedPct", &UCharacterClassDefinition::CrouchedPct)
        .def_readwrite("BaseEncumbranceResistance", &UCharacterClassDefinition::BaseEncumbranceResistance)
        .def_readwrite("MaxFallSpeed", &UCharacterClassDefinition::MaxFallSpeed)
        .def_readwrite("HealthPoolDefinition", &UCharacterClassDefinition::HealthPoolDefinition)
        .def_readwrite("ShieldPoolDefinition", &UCharacterClassDefinition::ShieldPoolDefinition)
        .def_readwrite("AccuracyPoolDefinition", &UCharacterClassDefinition::AccuracyPoolDefinition)
        .def_readwrite("OffHandAccuracyPoolDefinition", &UCharacterClassDefinition::OffHandAccuracyPoolDefinition)
        .def_readwrite("ResourcePools", &UCharacterClassDefinition::ResourcePools)
        .def_readwrite("BaseArmor", &UCharacterClassDefinition::BaseArmor)
        .def_readwrite("BaseNormalDamageModifiers", &UCharacterClassDefinition::BaseNormalDamageModifiers)
        .def_readwrite("BaseExplosiveDamageModifiers", &UCharacterClassDefinition::BaseExplosiveDamageModifiers)
        .def_readwrite("BaseShockDamageModifiers", &UCharacterClassDefinition::BaseShockDamageModifiers)
        .def_readwrite("BaseCorrosiveDamageModifiers", &UCharacterClassDefinition::BaseCorrosiveDamageModifiers)
        .def_readwrite("BaseIncendiaryDamageModifiers", &UCharacterClassDefinition::BaseIncendiaryDamageModifiers)
        .def_readwrite("BaseAmpDamageModifiers", &UCharacterClassDefinition::BaseAmpDamageModifiers)
          ;
}