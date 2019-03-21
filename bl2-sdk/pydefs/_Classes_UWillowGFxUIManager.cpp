#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxUIManager(py::object m)
{
    py::class_< UWillowGFxUIManager,  UObject   >(m, "UWillowGFxUIManager")
        .def_readwrite("MyDefinition", &UWillowGFxUIManager::MyDefinition)
        .def_readwrite("PlayerOwner", &UWillowGFxUIManager::PlayerOwner)
        .def_readwrite("PlayerViewOffset", &UWillowGFxUIManager::PlayerViewOffset)
        .def_readwrite("ScreenMesh", &UWillowGFxUIManager::ScreenMesh)
        .def_readwrite("RenderTarget", &UWillowGFxUIManager::RenderTarget)
        .def_readwrite("ScreenMovies", &UWillowGFxUIManager::ScreenMovies)
        .def_readwrite("TheLobby", &UWillowGFxUIManager::TheLobby)
        .def("StaticClass", &UWillowGFxUIManager::StaticClass, py::return_value_policy::reference)
        .def("WantsPause", &UWillowGFxUIManager::WantsPause)
        .def("UpdatePause", &UWillowGFxUIManager::UpdatePause)
        .def("Movie_OnClosed", &UWillowGFxUIManager::Movie_OnClosed)
        .def("ScreenMovie_OnClosed", &UWillowGFxUIManager::ScreenMovie_OnClosed)
        .def("UpdateFocus", &UWillowGFxUIManager::UpdateFocus)
        .def("FindFocusMovie", &UWillowGFxUIManager::FindFocusMovie, py::return_value_policy::reference)
        .def("ShowTrainingDialog", &UWillowGFxUIManager::ShowTrainingDialog, py::return_value_policy::reference)
        .def("ShowEditDialog", &UWillowGFxUIManager::ShowEditDialog, py::return_value_policy::reference)
        .def("ShowDialog", &UWillowGFxUIManager::ShowDialog, py::return_value_policy::reference)
        .def("OnRestrictDialogToOwnerViewport", &UWillowGFxUIManager::OnRestrictDialogToOwnerViewport)
        .def("GetPlayingMovie", &UWillowGFxUIManager::GetPlayingMovie, py::return_value_policy::reference)
        .def("eventIsBlockingMoviePlaying", &UWillowGFxUIManager::eventIsBlockingMoviePlaying)
        .def("CloseMovie", &UWillowGFxUIManager::CloseMovie)
        .def("IsMoviePlaying", &UWillowGFxUIManager::IsMoviePlaying)
        .def("PlayMovie", &UWillowGFxUIManager::PlayMovie, py::return_value_policy::reference)
        .def("OnMovieSpawned", &UWillowGFxUIManager::OnMovieSpawned)
        .def("ModalGameMenuCount", &UWillowGFxUIManager::ModalGameMenuCount)
        .def("Init", &UWillowGFxUIManager::Init)
        .def("ProcessViewRotation", &UWillowGFxUIManager::ProcessViewRotation)
        .def("CalcCamera", &UWillowGFxUIManager::CalcCamera)
        .def("UpdateScreenMesh", &UWillowGFxUIManager::UpdateScreenMesh)
          ;
}