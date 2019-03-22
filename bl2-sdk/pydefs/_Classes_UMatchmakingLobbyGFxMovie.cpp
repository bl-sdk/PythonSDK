#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMatchmakingLobbyGFxMovie(py::module &m)
{
    py::class_< UMatchmakingLobbyGFxMovie,  UWillowGFxMovie3D   >(m, "UMatchmakingLobbyGFxMovie")
        .def_readwrite("CharacterInfoGFxObj", &UMatchmakingLobbyGFxMovie::CharacterInfoGFxObj)
        .def_readwrite("ResultsGFxObj", &UMatchmakingLobbyGFxMovie::ResultsGFxObj)
        .def_readwrite("TooltipsGFxObj", &UMatchmakingLobbyGFxMovie::TooltipsGFxObj)
        .def_readwrite("CurrentMatchmakingState", &UMatchmakingLobbyGFxMovie::CurrentMatchmakingState)
        .def("StaticClass", &UMatchmakingLobbyGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("extMatchmakingLobbyOnLoad", &UMatchmakingLobbyGFxMovie::extMatchmakingLobbyOnLoad)
        .def("ResolvePlaythrough", &UMatchmakingLobbyGFxMovie::ResolvePlaythrough)
        .def("UpdateTooltips", &UMatchmakingLobbyGFxMovie::UpdateTooltips)
        .def("UpdateResults", &UMatchmakingLobbyGFxMovie::UpdateResults)
        .def("SetMatchmakingState", &UMatchmakingLobbyGFxMovie::SetMatchmakingState)
        .def("GetResultMessage", &UMatchmakingLobbyGFxMovie::GetResultMessage)
        .def("GetMatchTypeIconFrameName", &UMatchmakingLobbyGFxMovie::GetMatchTypeIconFrameName)
        .def("InitResultEntries", &UMatchmakingLobbyGFxMovie::InitResultEntries)
        .def("HandleInputKey", &UMatchmakingLobbyGFxMovie::HandleInputKey)
        .def("BeginClose", &UMatchmakingLobbyGFxMovie::BeginClose)
        .def("eventOnClose", &UMatchmakingLobbyGFxMovie::eventOnClose)
        .def("eventStart", &UMatchmakingLobbyGFxMovie::eventStart)
        .def("OnHostGameAccept", &UMatchmakingLobbyGFxMovie::OnHostGameAccept)
        .def("OnCancel", &UMatchmakingLobbyGFxMovie::OnCancel)
          ;
}