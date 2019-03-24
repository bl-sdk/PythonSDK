#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMissionDirector(py::module &m)
{
    py::class_< UIMissionDirector,  UInterface   >(m, "UIMissionDirector")
		.def_static("StaticClass", &UIMissionDirector::StaticClass, py::return_value_policy::reference)
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
          ;
}