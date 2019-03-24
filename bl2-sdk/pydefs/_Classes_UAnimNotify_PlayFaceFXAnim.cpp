#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_PlayFaceFXAnim(py::module &m)
{
    py::class_< UAnimNotify_PlayFaceFXAnim,  UAnimNotify_Scripted   >(m, "UAnimNotify_PlayFaceFXAnim")
		.def_static("StaticClass", &UAnimNotify_PlayFaceFXAnim::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FaceFXAnimSetRef", &UAnimNotify_PlayFaceFXAnim::FaceFXAnimSetRef)
        .def_readwrite("GroupName", &UAnimNotify_PlayFaceFXAnim::GroupName)
        .def_readwrite("AnimName", &UAnimNotify_PlayFaceFXAnim::AnimName)
        .def_readwrite("SoundCueToPlay", &UAnimNotify_PlayFaceFXAnim::SoundCueToPlay)
        .def_readwrite("AkEventToPlay", &UAnimNotify_PlayFaceFXAnim::AkEventToPlay)
        .def_readwrite("PlayFrequency", &UAnimNotify_PlayFaceFXAnim::PlayFrequency)
        .def("eventNotify", &UAnimNotify_PlayFaceFXAnim::eventNotify)
          ;
}