#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_FireShot(py::module &m)
{
    py::class_< UBehavior_FireShot,  UBehaviorBase   >(m, "UBehavior_FireShot")
        .def_readwrite("WeaponOwnerContext", &UBehavior_FireShot::WeaponOwnerContext)
        .def_readwrite("NumProjectiles", &UBehavior_FireShot::NumProjectiles)
        .def_readwrite("SpawnDirection", &UBehavior_FireShot::SpawnDirection)
        .def_readwrite("SpawnSocket", &UBehavior_FireShot::SpawnSocket)
        .def_readwrite("SpawnDirectionVector", &UBehavior_FireShot::SpawnDirectionVector)
        .def_readwrite("FiringModeDefinition", &UBehavior_FireShot::FiringModeDefinition)
        .def_readwrite("FireLocationSocketNames", &UBehavior_FireShot::FireLocationSocketNames)
        .def_readwrite("FireSocketSelection", &UBehavior_FireShot::FireSocketSelection)
        .def_readwrite("TimeBetweenShots", &UBehavior_FireShot::TimeBetweenShots)
        .def_readwrite("DamagePerSecondFormula", &UBehavior_FireShot::DamagePerSecondFormula)
        .def_readwrite("MomentumPerSecondFormula", &UBehavior_FireShot::MomentumPerSecondFormula)
        .def_readwrite("RadiusToDoDamageAroundImpact", &UBehavior_FireShot::RadiusToDoDamageAroundImpact)
        .def_readwrite("DamageSource", &UBehavior_FireShot::DamageSource)
        .def_readwrite("DamageTypeDefinition", &UBehavior_FireShot::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &UBehavior_FireShot::ImpactDefinition)
        .def_readwrite("BeamLocationOffset", &UBehavior_FireShot::BeamLocationOffset)
        .def_readwrite("FireLocationSocketsRemaining", &UBehavior_FireShot::FireLocationSocketsRemaining)
        .def_readwrite("NumShotsFired", &UBehavior_FireShot::NumShotsFired)
        .def("StaticClass", &UBehavior_FireShot::StaticClass, py::return_value_policy::reference)
        .def("FireNextShot", &UBehavior_FireShot::FireNextShot)
        .def("ApplyBehaviorToContext", &UBehavior_FireShot::ApplyBehaviorToContext)
          ;
}