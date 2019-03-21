#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PlayFaceFXAnim()
{
    py::class_< USeqAct_PlayFaceFXAnim,  USequenceAction   >("USeqAct_PlayFaceFXAnim")
        .def_readwrite("FaceFXAnimSetRef", &USeqAct_PlayFaceFXAnim::FaceFXAnimSetRef)
        .def_readwrite("FaceFXGroupName", &USeqAct_PlayFaceFXAnim::FaceFXGroupName)
        .def_readwrite("FaceFXAnimName", &USeqAct_PlayFaceFXAnim::FaceFXAnimName)
        .def_readwrite("SoundCueToPlay", &USeqAct_PlayFaceFXAnim::SoundCueToPlay)
        .def_readwrite("AkEventToPlay", &USeqAct_PlayFaceFXAnim::AkEventToPlay)
        .def("StaticClass", &USeqAct_PlayFaceFXAnim::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}