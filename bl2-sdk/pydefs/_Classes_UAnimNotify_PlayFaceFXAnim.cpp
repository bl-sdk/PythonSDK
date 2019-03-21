#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_PlayFaceFXAnim()
{
    class_< UAnimNotify_PlayFaceFXAnim, bases< UAnimNotify_Scripted >  , boost::noncopyable>("UAnimNotify_PlayFaceFXAnim", no_init)
        .def_readwrite("FaceFXAnimSetRef", &UAnimNotify_PlayFaceFXAnim::FaceFXAnimSetRef)
        .def_readwrite("GroupName", &UAnimNotify_PlayFaceFXAnim::GroupName)
        .def_readwrite("AnimName", &UAnimNotify_PlayFaceFXAnim::AnimName)
        .def_readwrite("SoundCueToPlay", &UAnimNotify_PlayFaceFXAnim::SoundCueToPlay)
        .def_readwrite("AkEventToPlay", &UAnimNotify_PlayFaceFXAnim::AkEventToPlay)
        .def_readwrite("PlayFrequency", &UAnimNotify_PlayFaceFXAnim::PlayFrequency)
        .def("StaticClass", &UAnimNotify_PlayFaceFXAnim::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventNotify", &UAnimNotify_PlayFaceFXAnim::eventNotify)
        .staticmethod("StaticClass")
  ;
}