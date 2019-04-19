#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_GameFramework_structs(py::module &m)
{
	py::class_< FPropertyInfo >(m, "FPropertyInfo")
		.def(py::init<>())
		.def_property("bModifyProperty", [](FPropertyInfo &self){return self.bModifyProperty;}, [](FPropertyInfo &self, bool value){self.bModifyProperty = value ? 1 : 0;})
		.def_readwrite("PropertyName", &FPropertyInfo::PropertyName, py::return_value_policy::reference)
		.def_readwrite("PropertyValue", &FPropertyInfo::PropertyValue, py::return_value_policy::reference)
		;
	py::class_< FRecoilParams >(m, "FRecoilParams")
		.def(py::init<>())
		.def_readwrite("X", &FRecoilParams::X)
		.def_readwrite("Y", &FRecoilParams::Y)
		.def_readwrite("Z", &FRecoilParams::Z)
		.def_readwrite("Padding", &FRecoilParams::Padding)
		;
	py::class_< FRecoilDef >(m, "FRecoilDef")
		.def(py::init<>())
		.def_readwrite("TimeToGo", &FRecoilDef::TimeToGo)
		.def_readwrite("TimeDuration", &FRecoilDef::TimeDuration)
		.def_readwrite("RotAmplitude", &FRecoilDef::RotAmplitude, py::return_value_policy::reference)
		.def_readwrite("RotFrequency", &FRecoilDef::RotFrequency, py::return_value_policy::reference)
		.def_readwrite("RotSinOffset", &FRecoilDef::RotSinOffset, py::return_value_policy::reference)
		.def_readwrite("RotParams", &FRecoilDef::RotParams, py::return_value_policy::reference)
		.def_readwrite("RotOffset", &FRecoilDef::RotOffset, py::return_value_policy::reference)
		.def_readwrite("LocAmplitude", &FRecoilDef::LocAmplitude, py::return_value_policy::reference)
		.def_readwrite("LocFrequency", &FRecoilDef::LocFrequency, py::return_value_policy::reference)
		.def_readwrite("LocSinOffset", &FRecoilDef::LocSinOffset, py::return_value_policy::reference)
		.def_readwrite("LocParams", &FRecoilDef::LocParams, py::return_value_policy::reference)
		.def_readwrite("LocOffset", &FRecoilDef::LocOffset, py::return_value_policy::reference)
		;
	py::class_< FAggregateEventMapping >(m, "FAggregateEventMapping")
		.def(py::init<>())
		.def_readwrite("EventID", &FAggregateEventMapping::EventID)
		.def_readwrite("AggregateID", &FAggregateEventMapping::AggregateID)
		.def_readwrite("TargetAggregateID", &FAggregateEventMapping::TargetAggregateID)
		;
	py::class_< FGameEvents >(m, "FGameEvents")
		.def(py::init<>())
		.def_readwrite("Events", &FGameEvents::Events, py::return_value_policy::reference)
		;
	py::class_< FEventsBase >(m, "FEventsBase")
		.def(py::init<>())
		.def_readwrite("TotalEvents", &FEventsBase::TotalEvents, py::return_value_policy::reference)
		.def_readwrite("EventsByClass", &FEventsBase::EventsByClass, py::return_value_policy::reference)
		;
	py::class_< FWeaponEvents, FEventsBase >(m, "FWeaponEvents")
		.def(py::init<>())
		;
	py::class_< FDamageEvents, FEventsBase >(m, "FDamageEvents")
		.def(py::init<>())
		;
	py::class_< FProjectileEvents, FEventsBase >(m, "FProjectileEvents")
		.def(py::init<>())
		;
	py::class_< FPawnEvents, FEventsBase >(m, "FPawnEvents")
		.def(py::init<>())
		;
	py::class_< FTeamEvents >(m, "FTeamEvents")
		.def(py::init<>())
		.def_readwrite("TotalEvents", &FTeamEvents::TotalEvents, py::return_value_policy::reference)
		.def_readwrite("WeaponEvents", &FTeamEvents::WeaponEvents, py::return_value_policy::reference)
		.def_readwrite("DamageAsPlayerEvents", &FTeamEvents::DamageAsPlayerEvents, py::return_value_policy::reference)
		.def_readwrite("DamageAsTargetEvents", &FTeamEvents::DamageAsTargetEvents, py::return_value_policy::reference)
		.def_readwrite("ProjectileEvents", &FTeamEvents::ProjectileEvents, py::return_value_policy::reference)
		.def_readwrite("PawnEvents", &FTeamEvents::PawnEvents, py::return_value_policy::reference)
		;
	py::class_< FPlayerEvents >(m, "FPlayerEvents")
		.def(py::init<>())
		.def_readwrite("TotalEvents", &FPlayerEvents::TotalEvents, py::return_value_policy::reference)
		.def_readwrite("WeaponEvents", &FPlayerEvents::WeaponEvents, py::return_value_policy::reference)
		.def_readwrite("DamageAsPlayerEvents", &FPlayerEvents::DamageAsPlayerEvents, py::return_value_policy::reference)
		.def_readwrite("DamageAsTargetEvents", &FPlayerEvents::DamageAsTargetEvents, py::return_value_policy::reference)
		.def_readwrite("ProjectileEvents", &FPlayerEvents::ProjectileEvents, py::return_value_policy::reference)
		.def_readwrite("PawnEvents", &FPlayerEvents::PawnEvents, py::return_value_policy::reference)
		;
	py::class_< FTeamState >(m, "FTeamState")
		.def(py::init<>())
		.def_readwrite("TeamIndex", &FTeamState::TeamIndex)
		.def_readwrite("PlayerIndices", &FTeamState::PlayerIndices, py::return_value_policy::reference)
		;
	py::class_< FPlayerState >(m, "FPlayerState")
		.def(py::init<>())
		.def_readwrite("PlayerIndex", &FPlayerState::PlayerIndex)
		.def_readwrite("CurrentTeamIndex", &FPlayerState::CurrentTeamIndex)
		.def_readwrite("TimeSpawned", &FPlayerState::TimeSpawned)
		.def_readwrite("TimeAliveSinceLastDeath", &FPlayerState::TimeAliveSinceLastDeath)
		;
	py::class_< FGameEvent >(m, "FGameEvent")
		.def(py::init<>())
		.def_readwrite("EventCountByTimePeriod", &FGameEvent::EventCountByTimePeriod, py::return_value_policy::reference)
		;

}