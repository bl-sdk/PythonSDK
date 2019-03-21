#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowPersonalTeleporter()
{
    class_< AWillowPersonalTeleporter, bases< ATeleporterDestination >  , boost::noncopyable>("AWillowPersonalTeleporter", no_init)
        .def_readwrite("TeleportedPlayers", &AWillowPersonalTeleporter::TeleportedPlayers)
        .def_readwrite("Definition", &AWillowPersonalTeleporter::Definition)
        .def_readwrite("CylinderComponent", &AWillowPersonalTeleporter::CylinderComponent)
        .def_readwrite("TeleporterParticleSystem", &AWillowPersonalTeleporter::TeleporterParticleSystem)
        .def_readwrite("LevelName", &AWillowPersonalTeleporter::LevelName)
        .def_readwrite("TeleporterAudio", &AWillowPersonalTeleporter::TeleporterAudio)
        .def("StaticClass", &AWillowPersonalTeleporter::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &AWillowPersonalTeleporter::eventDestroyed)
        .def("StopAmbientSound", &AWillowPersonalTeleporter::StopAmbientSound)
        .def("PlayAmbientSound", &AWillowPersonalTeleporter::PlayAmbientSound)
        .def("eventReleaseHeldLevel", &AWillowPersonalTeleporter::eventReleaseHeldLevel)
        .def("eventHoldLevel", &AWillowPersonalTeleporter::eventHoldLevel)
        .def("eventDeactivateTeleporter", &AWillowPersonalTeleporter::eventDeactivateTeleporter)
        .def("eventActivateTeleporter", &AWillowPersonalTeleporter::eventActivateTeleporter)
        .def("PlayerLeftGame", &AWillowPersonalTeleporter::PlayerLeftGame)
        .def("PlayerEnteredGame", &AWillowPersonalTeleporter::PlayerEnteredGame)
        .def("eventTouch", &AWillowPersonalTeleporter::eventTouch)
        .def("CreateExitPoints", &AWillowPersonalTeleporter::CreateExitPoints)
        .def("SnapToGround", &AWillowPersonalTeleporter::SnapToGround)
        .def("IntializeParticleSystem", &AWillowPersonalTeleporter::IntializeParticleSystem)
        .def("InitializeFromDefinition", &AWillowPersonalTeleporter::InitializeFromDefinition)
        .def("InitializeTeleporter", &AWillowPersonalTeleporter::InitializeTeleporter)
        .def("SpawnReturnTeleporter", &AWillowPersonalTeleporter::SpawnReturnTeleporter)
        .def("PlaceTeleporter", &AWillowPersonalTeleporter::PlaceTeleporter)
        .def("ActivateTeleporterPlacedEvent", &AWillowPersonalTeleporter::ActivateTeleporterPlacedEvent)
        .def("eventReplicatedEvent", &AWillowPersonalTeleporter::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}