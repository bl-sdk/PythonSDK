#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIMissionDirector()
{
    class_< UIMissionDirector, bases< UInterface >  , boost::noncopyable>("UIMissionDirector", no_init)
        .def("StaticClass", &UIMissionDirector::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnPlayerClosedMissionUI", &UIMissionDirector::OnPlayerClosedMissionUI)
        .def("OnPlayerOpenedMissionUI", &UIMissionDirector::OnPlayerOpenedMissionUI)
        .def("HasAnyMissionsForPlayer", &UIMissionDirector::HasAnyMissionsForPlayer)
        .def("GetMissionDirectorLocation", &UIMissionDirector::GetMissionDirectorLocation)
        .def("GetAllDirectorData", &UIMissionDirector::GetAllDirectorData)
        .def("eventDeactivateMissionDirectorParticle", &UIMissionDirector::eventDeactivateMissionDirectorParticle)
        .def("eventSetMissionDirectorParticle", &UIMissionDirector::eventSetMissionDirectorParticle)
        .def("eventMissionStatusChanged", &UIMissionDirector::eventMissionStatusChanged)
        .def("OnPlayerTurnedInMission", &UIMissionDirector::OnPlayerTurnedInMission)
        .def("OnPlayerAcceptedMission", &UIMissionDirector::OnPlayerAcceptedMission)
        .def("GetInProgressMissions", &UIMissionDirector::GetInProgressMissions)
        .def("GetEligibleMissions", &UIMissionDirector::GetEligibleMissions)
        .def("GetRedeemableMissions", &UIMissionDirector::GetRedeemableMissions)
        .def("eventAddMissionDirective", &UIMissionDirector::eventAddMissionDirective)
        .staticmethod("StaticClass")
  ;
}