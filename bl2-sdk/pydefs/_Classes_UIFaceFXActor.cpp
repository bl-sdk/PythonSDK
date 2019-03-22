#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIFaceFXActor(py::module &m)
{
    py::class_< UIFaceFXActor,  UInterface   >(m, "UIFaceFXActor")
        .def("eventGetFaceFXAsset", &UIFaceFXActor::eventGetFaceFXAsset, py::return_value_policy::reference)
        .def("eventSetAudioCueOpenedByFaceFX", &UIFaceFXActor::eventSetAudioCueOpenedByFaceFX)
        .def("PlayFaceAnimation", &UIFaceFXActor::PlayFaceAnimation)
          ;
}