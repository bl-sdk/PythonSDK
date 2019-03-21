#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxAction_OpenMovie()
{
    class_< UGFxAction_OpenMovie, bases< USequenceAction >  , boost::noncopyable>("UGFxAction_OpenMovie", no_init)
        .def_readwrite("Movie", &UGFxAction_OpenMovie::Movie)
        .def_readwrite("MoviePlayerClass", &UGFxAction_OpenMovie::MoviePlayerClass)
        .def_readwrite("MoviePlayer", &UGFxAction_OpenMovie::MoviePlayer)
        .def_readwrite("LegacyMovieObject", &UGFxAction_OpenMovie::LegacyMovieObject)
        .def_readwrite("RenderTextureMode", &UGFxAction_OpenMovie::RenderTextureMode)
        .def_readwrite("ScaleMode", &UGFxAction_OpenMovie::ScaleMode)
        .def_readwrite("AlignMode", &UGFxAction_OpenMovie::AlignMode)
        .def_readwrite("RenderTexture", &UGFxAction_OpenMovie::RenderTexture)
        .def_readwrite("CaptureKeys", &UGFxAction_OpenMovie::CaptureKeys)
        .def_readwrite("FocusIgnoreKeys", &UGFxAction_OpenMovie::FocusIgnoreKeys)
        .def("StaticClass", &UGFxAction_OpenMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsValidLevelSequenceObject", &UGFxAction_OpenMovie::eventIsValidLevelSequenceObject)
        .staticmethod("StaticClass")
  ;
}