#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMatchmakingLobbyGFxMovie()
{
    class_< UMatchmakingLobbyGFxMovie, bases< UWillowGFxMovie3D >  , boost::noncopyable>("UMatchmakingLobbyGFxMovie", no_init)
        .def_readwrite("CharacterInfoGFxObj", &UMatchmakingLobbyGFxMovie::CharacterInfoGFxObj)
        .def_readwrite("ResultsGFxObj", &UMatchmakingLobbyGFxMovie::ResultsGFxObj)
        .def_readwrite("TooltipsGFxObj", &UMatchmakingLobbyGFxMovie::TooltipsGFxObj)
        .def_readonly("ResultEntries", &UMatchmakingLobbyGFxMovie::ResultEntries)
        .def_readwrite("CurrentMatchmakingState", &UMatchmakingLobbyGFxMovie::CurrentMatchmakingState)
        .def("StaticClass", &UMatchmakingLobbyGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}