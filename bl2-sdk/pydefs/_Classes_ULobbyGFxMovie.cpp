#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULobbyGFxMovie()
{
    class_< ULobbyGFxMovie, bases< UFrontendGFxMovie >  , boost::noncopyable>("ULobbyGFxMovie", no_init)
        .def_readwrite("PrimaryPlayerPRI", &ULobbyGFxMovie::PrimaryPlayerPRI)
        .def_readwrite("SplitPlayerPRI", &ULobbyGFxMovie::SplitPlayerPRI)
        .def("StaticClass", &ULobbyGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}