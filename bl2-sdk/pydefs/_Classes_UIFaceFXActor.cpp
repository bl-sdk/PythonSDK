#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIFaceFXActor()
{
    class_< UIFaceFXActor, bases< UInterface >  , boost::noncopyable>("UIFaceFXActor", no_init)
        .def("StaticClass", &UIFaceFXActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetFaceFXAsset", &UIFaceFXActor::eventGetFaceFXAsset, return_value_policy< reference_existing_object >())
        .def("eventSetAudioCueOpenedByFaceFX", &UIFaceFXActor::eventSetAudioCueOpenedByFaceFX)
        .def("PlayFaceAnimation", &UIFaceFXActor::PlayFaceAnimation)
        .staticmethod("StaticClass")
  ;
}