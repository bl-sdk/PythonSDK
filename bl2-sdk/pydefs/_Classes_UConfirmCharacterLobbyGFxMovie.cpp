#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UConfirmCharacterLobbyGFxMovie(py::module &m)
{
    py::class_< UConfirmCharacterLobbyGFxMovie,  UWillowGFxMovie   >(m, "UConfirmCharacterLobbyGFxMovie")
        .def_readwrite("ConfirmCharacterLobbyObj", &UConfirmCharacterLobbyGFxMovie::ConfirmCharacterLobbyObj)
        .def("StaticClass", &UConfirmCharacterLobbyGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("SetHeader", &UConfirmCharacterLobbyGFxMovie::SetHeader)
        .def("SetCharacterInfo", &UConfirmCharacterLobbyGFxMovie::SetCharacterInfo)
        .def("Hide", &UConfirmCharacterLobbyGFxMovie::Hide)
        .def("Show", &UConfirmCharacterLobbyGFxMovie::Show)
        .def("PopulatePlayerData", &UConfirmCharacterLobbyGFxMovie::PopulatePlayerData)
        .def("CharacterSelectClosed", &UConfirmCharacterLobbyGFxMovie::CharacterSelectClosed)
        .def("CharacterLoadComplete", &UConfirmCharacterLobbyGFxMovie::CharacterLoadComplete)
        .def("OpenCharacterSelect", &UConfirmCharacterLobbyGFxMovie::OpenCharacterSelect)
        .def("ConfirmCharacterSelectForPlayer", &UConfirmCharacterLobbyGFxMovie::ConfirmCharacterSelectForPlayer)
        .def("ConfigureForPlayers", &UConfirmCharacterLobbyGFxMovie::ConfigureForPlayers)
        .def("ResolvePlaythrough", &UConfirmCharacterLobbyGFxMovie::ResolvePlaythrough)
        .def("OnChangeCharacterButtonClick", &UConfirmCharacterLobbyGFxMovie::OnChangeCharacterButtonClick)
        .def("OnCancelButtonClick", &UConfirmCharacterLobbyGFxMovie::OnCancelButtonClick)
        .def("HandleConfirm", &UConfirmCharacterLobbyGFxMovie::HandleConfirm)
        .def("OnConfirmButtonClick", &UConfirmCharacterLobbyGFxMovie::OnConfirmButtonClick)
        .def("HandleInputKey", &UConfirmCharacterLobbyGFxMovie::HandleInputKey)
        .def("BeginClose", &UConfirmCharacterLobbyGFxMovie::BeginClose)
        .def("eventOnClose", &UConfirmCharacterLobbyGFxMovie::eventOnClose)
        .def("extConfirmCharacterLobbyReady", &UConfirmCharacterLobbyGFxMovie::extConfirmCharacterLobbyReady)
        .def("eventStart", &UConfirmCharacterLobbyGFxMovie::eventStart)
        .def("OnConfirmCharacters", &UConfirmCharacterLobbyGFxMovie::OnConfirmCharacters)
          ;
}