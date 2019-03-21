#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIDefinition(py::object m)
{
    py::class_< UAIDefinition,  UObject   >(m, "UAIDefinition")
        .def_readwrite("VfTable_IIBehaviorProvider", &UAIDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("BehaviorProviderDefinition", &UAIDefinition::BehaviorProviderDefinition)
        .def_readwrite("AIBehaviorProviderDefinition", &UAIDefinition::AIBehaviorProviderDefinition)
        .def_readwrite("NodeList", &UAIDefinition::NodeList)
        .def_readwrite("TargetSearchRadius", &UAIDefinition::TargetSearchRadius)
        .def_readwrite("TargetingDef", &UAIDefinition::TargetingDef)
        .def("StaticClass", &UAIDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnReset", &UAIDefinition::OnReset)
        .def("OnHitByVehicle", &UAIDefinition::OnHitByVehicle)
        .def("OnRanOver", &UAIDefinition::OnRanOver)
        .def("OnTimerEvent", &UAIDefinition::OnTimerEvent)
        .def("OnKilledPawn", &UAIDefinition::OnKilledPawn)
        .def("OnLanded", &UAIDefinition::OnLanded)
        .def("OnStopFiringWeapon", &UAIDefinition::OnStopFiringWeapon)
        .def("OnStartFiringWeapon", &UAIDefinition::OnStartFiringWeapon)
        .def("OnTargetLost", &UAIDefinition::OnTargetLost)
        .def("OnTargetChanged", &UAIDefinition::OnTargetChanged)
        .def("OnTargetAcquired", &UAIDefinition::OnTargetAcquired)
        .def("OnSpawned", &UAIDefinition::OnSpawned)
        .def("OnTakeHeal", &UAIDefinition::OnTakeHeal)
        .def("OnVehicleTakeDamage", &UAIDefinition::OnVehicleTakeDamage)
        .def("OnTakeDamage", &UAIDefinition::OnTakeDamage)
        .def("OnUserCouldNotAffordSecondary", &UAIDefinition::OnUserCouldNotAffordSecondary)
        .def("OnUserCouldNotAfford", &UAIDefinition::OnUserCouldNotAfford)
        .def("OnSecondaryUsed", &UAIDefinition::OnSecondaryUsed)
        .def("OnUsed", &UAIDefinition::OnUsed)
        .def("SetBehaviorProviderDefinition", &UAIDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UAIDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}