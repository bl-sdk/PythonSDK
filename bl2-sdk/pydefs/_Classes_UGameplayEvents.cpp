#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameplayEvents(py::module &m)
{
    py::class_< UGameplayEvents,  UObject   >(m, "UGameplayEvents")
        .def_readwrite("Archive", &UGameplayEvents::Archive)
        .def_readwrite("StatsFileName", &UGameplayEvents::StatsFileName)
        .def_readwrite("Header", &UGameplayEvents::Header)
        .def_readwrite("CurrentSessionInfo", &UGameplayEvents::CurrentSessionInfo)
        .def_readwrite("PlayerList", &UGameplayEvents::PlayerList)
        .def_readwrite("TeamList", &UGameplayEvents::TeamList)
        .def_readwrite("SupportedEvents", &UGameplayEvents::SupportedEvents)
        .def_readwrite("WeaponClassArray", &UGameplayEvents::WeaponClassArray)
        .def_readwrite("DamageClassArray", &UGameplayEvents::DamageClassArray)
        .def_readwrite("ProjectileClassArray", &UGameplayEvents::ProjectileClassArray)
        .def_readwrite("PawnClassArray", &UGameplayEvents::PawnClassArray)
        .def_readwrite("ActorArray", &UGameplayEvents::ActorArray)
        .def_readwrite("SoundCueArray", &UGameplayEvents::SoundCueArray)
        .def("eventGetFilename", &UGameplayEvents::eventGetFilename)
        .def("CloseStatsFile", &UGameplayEvents::CloseStatsFile)
        .def("OpenStatsFile", &UGameplayEvents::OpenStatsFile)
          ;
}