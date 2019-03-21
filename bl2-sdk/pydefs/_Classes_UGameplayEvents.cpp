#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameplayEvents()
{
    class_< UGameplayEvents, bases< UObject >  , boost::noncopyable>("UGameplayEvents", no_init)
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
        .def("StaticClass", &UGameplayEvents::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetFilename", &UGameplayEvents::eventGetFilename)
        .def("CloseStatsFile", &UGameplayEvents::CloseStatsFile)
        .def("OpenStatsFile", &UGameplayEvents::OpenStatsFile)
        .staticmethod("StaticClass")
  ;
}