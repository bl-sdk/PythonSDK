#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxUIManager()
{
    class_< UWillowGFxUIManager, bases< UObject >  , boost::noncopyable>("UWillowGFxUIManager", no_init)
        .def_readwrite("MyDefinition", &UWillowGFxUIManager::MyDefinition)
        .def_readwrite("PlayerOwner", &UWillowGFxUIManager::PlayerOwner)
        .def_readwrite("PlayerViewOffset", &UWillowGFxUIManager::PlayerViewOffset)
        .def_readwrite("ScreenMesh", &UWillowGFxUIManager::ScreenMesh)
        .def_readwrite("RenderTarget", &UWillowGFxUIManager::RenderTarget)
        .def_readwrite("ScreenMovies", &UWillowGFxUIManager::ScreenMovies)
        .def_readwrite("TheLobby", &UWillowGFxUIManager::TheLobby)
        .def("StaticClass", &UWillowGFxUIManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("WantsPause", &UWillowGFxUIManager::WantsPause)
        .def("UpdatePause", &UWillowGFxUIManager::UpdatePause)
        .def("Movie_OnClosed", &UWillowGFxUIManager::Movie_OnClosed)
        .def("ScreenMovie_OnClosed", &UWillowGFxUIManager::ScreenMovie_OnClosed)
        .def("UpdateFocus", &UWillowGFxUIManager::UpdateFocus)
        .def("FindFocusMovie", &UWillowGFxUIManager::FindFocusMovie, return_value_policy< reference_existing_object >())
        .def("ShowTrainingDialog", &UWillowGFxUIManager::ShowTrainingDialog, return_value_policy< reference_existing_object >())
        .def("ShowEditDialog", &UWillowGFxUIManager::ShowEditDialog, return_value_policy< reference_existing_object >())
        .def("ShowDialog", &UWillowGFxUIManager::ShowDialog, return_value_policy< reference_existing_object >())
        .def("OnRestrictDialogToOwnerViewport", &UWillowGFxUIManager::OnRestrictDialogToOwnerViewport)
        .def("GetPlayingMovie", &UWillowGFxUIManager::GetPlayingMovie, return_value_policy< reference_existing_object >())
        .def("eventIsBlockingMoviePlaying", &UWillowGFxUIManager::eventIsBlockingMoviePlaying)
        .def("CloseMovie", &UWillowGFxUIManager::CloseMovie)
        .def("IsMoviePlaying", &UWillowGFxUIManager::IsMoviePlaying)
        .def("PlayMovie", &UWillowGFxUIManager::PlayMovie, return_value_policy< reference_existing_object >())
        .def("OnMovieSpawned", &UWillowGFxUIManager::OnMovieSpawned)
        .def("ModalGameMenuCount", &UWillowGFxUIManager::ModalGameMenuCount)
        .def("Init", &UWillowGFxUIManager::Init)
        .def("ProcessViewRotation", &UWillowGFxUIManager::ProcessViewRotation)
        .def("CalcCamera", &UWillowGFxUIManager::CalcCamera)
        .def("UpdateScreenMesh", &UWillowGFxUIManager::UpdateScreenMesh)
        .staticmethod("StaticClass")
  ;
}