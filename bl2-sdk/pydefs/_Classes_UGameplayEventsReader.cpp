#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameplayEventsReader()
{
    class_< UGameplayEventsReader, bases< UObject >  , boost::noncopyable>("UGameplayEventsReader", no_init)
        .def_readwrite("RegisteredHandlers", &UGameplayEventsReader::RegisteredHandlers)
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
        .def("StaticClass", &UGameplayEventsReader::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSessionDuration", &UGameplayEventsReader::GetSessionDuration)
        .def("GetSessionEnd", &UGameplayEventsReader::GetSessionEnd)
        .def("GetSessionStart", &UGameplayEventsReader::GetSessionStart)
        .def("GetSessionTimestamp", &UGameplayEventsReader::GetSessionTimestamp)
        .def("GetPlatform", &UGameplayEventsReader::GetPlatform)
        .def("GetTitleID", &UGameplayEventsReader::GetTitleID)
        .def("GetSessionID", &UGameplayEventsReader::GetSessionID)
        .def("ProcessStreamEnd", &UGameplayEventsReader::ProcessStreamEnd)
        .def("ProcessStream", &UGameplayEventsReader::ProcessStream)
        .def("ProcessStreamStart", &UGameplayEventsReader::ProcessStreamStart)
        .def("eventUnregisterHandler", &UGameplayEventsReader::eventUnregisterHandler)
        .def("eventRegisterHandler", &UGameplayEventsReader::eventRegisterHandler)
        .def("SerializeHeader", &UGameplayEventsReader::SerializeHeader)
        .def("CloseStatsFile", &UGameplayEventsReader::CloseStatsFile)
        .def("OpenStatsFile", &UGameplayEventsReader::OpenStatsFile)
        .def("eventGetFilename", &UGameplayEvents::eventGetFilename)
        .staticmethod("StaticClass")
  ;
}