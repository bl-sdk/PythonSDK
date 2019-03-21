#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_PlayFaceFXAnim()
{
    class_< USeqAct_PlayFaceFXAnim, bases< USequenceAction >  , boost::noncopyable>("USeqAct_PlayFaceFXAnim", no_init)
        .def_readwrite("FaceFXAnimSetRef", &USeqAct_PlayFaceFXAnim::FaceFXAnimSetRef)
        .def_readwrite("FaceFXGroupName", &USeqAct_PlayFaceFXAnim::FaceFXGroupName)
        .def_readwrite("FaceFXAnimName", &USeqAct_PlayFaceFXAnim::FaceFXAnimName)
        .def_readwrite("SoundCueToPlay", &USeqAct_PlayFaceFXAnim::SoundCueToPlay)
        .def_readwrite("AkEventToPlay", &USeqAct_PlayFaceFXAnim::AkEventToPlay)
        .def("StaticClass", &USeqAct_PlayFaceFXAnim::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}