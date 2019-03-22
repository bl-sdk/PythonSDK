#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULobbyGFxMovie(py::module &m)
{
    py::class_< ULobbyGFxMovie,  UFrontendGFxMovie   >(m, "ULobbyGFxMovie")
        .def_readwrite("PrimaryPlayerPRI", &ULobbyGFxMovie::PrimaryPlayerPRI)
        .def_readwrite("SplitPlayerPRI", &ULobbyGFxMovie::SplitPlayerPRI)
        .def("StaticClass", &ULobbyGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("FadeLobbyDeco", &ULobbyGFxMovie::FadeLobbyDeco)
        .def("ShowConfirmQuitDialog", &ULobbyGFxMovie::ShowConfirmQuitDialog)
        .def("OnQuitConfirmed", &ULobbyGFxMovie::OnQuitConfirmed)
        .def("CanShowSpectatorControls", &ULobbyGFxMovie::CanShowSpectatorControls)
        .def("extFrontEndMenuOnLoad", &ULobbyGFxMovie::extFrontEndMenuOnLoad)
        .def("OnConfirmCharacters", &ULobbyGFxMovie::OnConfirmCharacters)
        .def("PromptConfirmCharacters", &ULobbyGFxMovie::PromptConfirmCharacters)
        .def("eventOnClose", &ULobbyGFxMovie::eventOnClose)
        .def("CheckSpectatorPoint", &ULobbyGFxMovie::CheckSpectatorPoint)
        .def("eventStart", &ULobbyGFxMovie::eventStart)
          ;
}