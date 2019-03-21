#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIFaceFXActor()
{
    py::class_< UIFaceFXActor,  UInterface   >("UIFaceFXActor")
        .def("StaticClass", &UIFaceFXActor::StaticClass, py::return_value_policy::reference)
        .def("eventGetFaceFXAsset", &UIFaceFXActor::eventGetFaceFXAsset, py::return_value_policy::reference)
        .def("eventSetAudioCueOpenedByFaceFX", &UIFaceFXActor::eventSetAudioCueOpenedByFaceFX)
        .def("PlayFaceAnimation", &UIFaceFXActor::PlayFaceAnimation)
        .staticmethod("StaticClass")
  ;
}