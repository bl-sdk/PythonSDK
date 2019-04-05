#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_GameFramework_structs(py::module &m)
{
	py::class_< FRecoilParams >(m, "FRecoilParams")
		.def_readwrite("X", &FRecoilParams::X)
		.def_readwrite("Y", &FRecoilParams::Y)
		.def_readwrite("Z", &FRecoilParams::Z)
		.def_readwrite("Padding", &FRecoilParams::Padding)
  ;
	py::class_< FRecoilDef >(m, "FRecoilDef")
		.def_readwrite("TimeToGo", &FRecoilDef::TimeToGo)
		.def_readwrite("TimeDuration", &FRecoilDef::TimeDuration)
		.def_readwrite("RotAmplitude", &FRecoilDef::RotAmplitude)
		.def_readwrite("RotFrequency", &FRecoilDef::RotFrequency)
		.def_readwrite("RotSinOffset", &FRecoilDef::RotSinOffset)
		.def_readwrite("RotParams", &FRecoilDef::RotParams)
		.def_readwrite("RotOffset", &FRecoilDef::RotOffset)
		.def_readwrite("LocAmplitude", &FRecoilDef::LocAmplitude)
		.def_readwrite("LocFrequency", &FRecoilDef::LocFrequency)
		.def_readwrite("LocSinOffset", &FRecoilDef::LocSinOffset)
		.def_readwrite("LocParams", &FRecoilDef::LocParams)
		.def_readwrite("LocOffset", &FRecoilDef::LocOffset)
  ;
	py::class_< FTeamState >(m, "FTeamState")
		.def_readwrite("TeamIndex", &FTeamState::TeamIndex)
		.def_readwrite("PlayerIndices", &FTeamState::PlayerIndices)
  ;
	py::class_< FPlayerState >(m, "FPlayerState")
		.def_readwrite("PlayerIndex", &FPlayerState::PlayerIndex)
		.def_readwrite("CurrentTeamIndex", &FPlayerState::CurrentTeamIndex)
		.def_readwrite("TimeSpawned", &FPlayerState::TimeSpawned)
		.def_readwrite("TimeAliveSinceLastDeath", &FPlayerState::TimeAliveSinceLastDeath)
  ;
	py::class_< FAggregateEventMapping >(m, "FAggregateEventMapping")
		.def_readwrite("EventID", &FAggregateEventMapping::EventID)
		.def_readwrite("AggregateID", &FAggregateEventMapping::AggregateID)
		.def_readwrite("TargetAggregateID", &FAggregateEventMapping::TargetAggregateID)
  ;
	py::class_< FGameEvents >(m, "FGameEvents")
		.def_readwrite("Events", &FGameEvents::Events)
  ;
	py::class_< FEventsBase >(m, "FEventsBase")
		.def_readwrite("TotalEvents", &FEventsBase::TotalEvents)
		.def_readwrite("EventsByClass", &FEventsBase::EventsByClass)
  ;
	py::class_< FProjectileEvents >(m, "FProjectileEvents")
		.def_readwrite("TotalEvents", &FEventsBase::TotalEvents)
		.def_readwrite("EventsByClass", &FEventsBase::EventsByClass)
  ;
	py::class_< FTeamEvents >(m, "FTeamEvents")
		.def_readwrite("TotalEvents", &FTeamEvents::TotalEvents)
		.def_readwrite("WeaponEvents", &FTeamEvents::WeaponEvents)
		.def_readwrite("DamageAsPlayerEvents", &FTeamEvents::DamageAsPlayerEvents)
		.def_readwrite("DamageAsTargetEvents", &FTeamEvents::DamageAsTargetEvents)
		.def_readwrite("ProjectileEvents", &FTeamEvents::ProjectileEvents)
		.def_readwrite("PawnEvents", &FTeamEvents::PawnEvents)
  ;
	py::class_< FPlayerEvents >(m, "FPlayerEvents")
		.def_readwrite("TotalEvents", &FPlayerEvents::TotalEvents)
		.def_readwrite("WeaponEvents", &FPlayerEvents::WeaponEvents)
		.def_readwrite("DamageAsPlayerEvents", &FPlayerEvents::DamageAsPlayerEvents)
		.def_readwrite("DamageAsTargetEvents", &FPlayerEvents::DamageAsTargetEvents)
		.def_readwrite("ProjectileEvents", &FPlayerEvents::ProjectileEvents)
		.def_readwrite("PawnEvents", &FPlayerEvents::PawnEvents)
  ;
	py::class_< FGameEvent >(m, "FGameEvent")
		.def_readwrite("EventCountByTimePeriod", &FGameEvent::EventCountByTimePeriod)
  ;
	py::class_< FPropertyInfo >(m, "FPropertyInfo")
		.def_property("bModifyProperty", [](FPropertyInfo &self){return self.bModifyProperty;}, [](FPropertyInfo &self, bool value){self.bModifyProperty = value ? 1 : 0;})
		.def_readwrite("PropertyName", &FPropertyInfo::PropertyName)
		.def_readwrite("PropertyValue", &FPropertyInfo::PropertyValue)
  ;

}