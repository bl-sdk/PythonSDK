#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieCredits()
{
    class_< UWillowGFxMovieCredits, bases< UWillowGFxMovie3D >  , boost::noncopyable>("UWillowGFxMovieCredits", no_init)
        .def_readwrite("ceStarted", &UWillowGFxMovieCredits::ceStarted)
        .def_readwrite("ceFinished", &UWillowGFxMovieCredits::ceFinished)
        .def_readwrite("Credits", &UWillowGFxMovieCredits::Credits)
        .def_readwrite("Montage", &UWillowGFxMovieCredits::Montage)
        .def_readwrite("DataProvider", &UWillowGFxMovieCredits::DataProvider)
        .def_readwrite("CreditsDef", &UWillowGFxMovieCredits::CreditsDef)
        .def_readwrite("MiddlewareTexture", &UWillowGFxMovieCredits::MiddlewareTexture)
        .def_readwrite("MiddlewareTextureLinkageName", &UWillowGFxMovieCredits::MiddlewareTextureLinkageName)
        .def_readwrite("SplatTexture", &UWillowGFxMovieCredits::SplatTexture)
        .def_readwrite("SplatTextureLinkageName", &UWillowGFxMovieCredits::SplatTextureLinkageName)
        .def_readwrite("ClosingTimeRemaining", &UWillowGFxMovieCredits::ClosingTimeRemaining)
        .def_readwrite("AxisResetCounter", &UWillowGFxMovieCredits::AxisResetCounter)
        .def("StaticClass", &UWillowGFxMovieCredits::StaticClass, return_value_policy< reference_existing_object >())
        .def("HandleInputAxis", &UWillowGFxMovieCredits::HandleInputAxis)
        .def("HandleInputKey", &UWillowGFxMovieCredits::HandleInputKey)
        .def("BeginClosing", &UWillowGFxMovieCredits::BeginClosing)
        .def("extCreditsFinished", &UWillowGFxMovieCredits::extCreditsFinished)
        .def("extOnSplatClipOnLoad", &UWillowGFxMovieCredits::extOnSplatClipOnLoad)
        .def("eventOnSplatTextureLoaded", &UWillowGFxMovieCredits::eventOnSplatTextureLoaded)
        .def("ClearSplatTexture", &UWillowGFxMovieCredits::ClearSplatTexture)
        .def("LoadSplatTexture", &UWillowGFxMovieCredits::LoadSplatTexture)
        .def("extOnMiddlewareClipOnLoad", &UWillowGFxMovieCredits::extOnMiddlewareClipOnLoad)
        .def("eventOnMiddlewareTextureLoaded", &UWillowGFxMovieCredits::eventOnMiddlewareTextureLoaded)
        .def("ClearMiddlewareTexture", &UWillowGFxMovieCredits::ClearMiddlewareTexture)
        .def("LoadMiddlewareTexture", &UWillowGFxMovieCredits::LoadMiddlewareTexture)
        .def("extInitMontage", &UWillowGFxMovieCredits::extInitMontage)
        .def("extInitCredits", &UWillowGFxMovieCredits::extInitCredits)
        .def("eventOnTick", &UWillowGFxMovieCredits::eventOnTick)
        .def("eventOnClose", &UWillowGFxMovieCredits::eventOnClose)
        .def("eventStart", &UWillowGFxMovieCredits::eventStart)
        .staticmethod("StaticClass")
  ;
}