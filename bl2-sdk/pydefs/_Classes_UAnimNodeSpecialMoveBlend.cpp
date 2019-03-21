#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeSpecialMoveBlend()
{
    class_< UAnimNodeSpecialMoveBlend, bases< UAnimNodeSlot >  , boost::noncopyable>("UAnimNodeSpecialMoveBlend", no_init)
        .def_readwrite("AnimState", &UAnimNodeSpecialMoveBlend::AnimState)
        .def_readwrite("SavedBlendOutTime", &UAnimNodeSpecialMoveBlend::SavedBlendOutTime)
        .def_readwrite("SMI", &UAnimNodeSpecialMoveBlend::SMI)
        .def_readonly("UnknownData00", &UAnimNodeSpecialMoveBlend::UnknownData00)
        .def_readwrite("AnimParameters", &UAnimNodeSpecialMoveBlend::AnimParameters)
        .def("StaticClass", &UAnimNodeSpecialMoveBlend::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsPlaying", &UAnimNodeSpecialMoveBlend::IsPlaying)
        .def("SetRootMotion", &UAnimNodeSpecialMoveBlend::SetRootMotion)
        .def("GetCurrentAnimDef", &UAnimNodeSpecialMoveBlend::GetCurrentAnimDef, return_value_policy< reference_existing_object >())
        .def("GetCurrentAnimName", &UAnimNodeSpecialMoveBlend::GetCurrentAnimName)
        .def("Finish", &UAnimNodeSpecialMoveBlend::Finish)
        .def("Stop", &UAnimNodeSpecialMoveBlend::Stop)
        .def("PlayData", &UAnimNodeSpecialMoveBlend::PlayData)
        .def("Play", &UAnimNodeSpecialMoveBlend::Play)
        .staticmethod("StaticClass")
  ;
}