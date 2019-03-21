#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxAction_OpenMovie()
{
    py::class_< UGFxAction_OpenMovie,  USequenceAction   >("UGFxAction_OpenMovie")
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
        .def("StaticClass", &UGFxAction_OpenMovie::StaticClass, py::return_value_policy::reference)
        .def("eventIsValidLevelSequenceObject", &UGFxAction_OpenMovie::eventIsValidLevelSequenceObject)
        .staticmethod("StaticClass")
  ;
}