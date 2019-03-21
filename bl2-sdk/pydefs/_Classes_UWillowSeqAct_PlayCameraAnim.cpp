#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_PlayCameraAnim()
{
    class_< UWillowSeqAct_PlayCameraAnim, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_PlayCameraAnim", no_init)
        .def_readwrite("AnimToPlay", &UWillowSeqAct_PlayCameraAnim::AnimToPlay)
        .def_readwrite("BlendInTime", &UWillowSeqAct_PlayCameraAnim::BlendInTime)
        .def_readwrite("BlendOutTime", &UWillowSeqAct_PlayCameraAnim::BlendOutTime)
        .def_readwrite("Rate", &UWillowSeqAct_PlayCameraAnim::Rate)
        .def_readwrite("IntensityScale", &UWillowSeqAct_PlayCameraAnim::IntensityScale)
        .def("StaticClass", &UWillowSeqAct_PlayCameraAnim::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}