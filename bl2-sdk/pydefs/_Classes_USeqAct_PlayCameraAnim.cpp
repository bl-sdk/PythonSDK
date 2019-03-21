#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_PlayCameraAnim()
{
    class_< USeqAct_PlayCameraAnim, bases< USequenceAction >  , boost::noncopyable>("USeqAct_PlayCameraAnim", no_init)
        .def_readwrite("CameraAnim", &USeqAct_PlayCameraAnim::CameraAnim)
        .def_readwrite("BlendInTime", &USeqAct_PlayCameraAnim::BlendInTime)
        .def_readwrite("BlendOutTime", &USeqAct_PlayCameraAnim::BlendOutTime)
        .def_readwrite("Rate", &USeqAct_PlayCameraAnim::Rate)
        .def_readwrite("IntensityScale", &USeqAct_PlayCameraAnim::IntensityScale)
        .def_readwrite("PlaySpace", &USeqAct_PlayCameraAnim::PlaySpace)
        .def_readwrite("UserDefinedSpaceActor", &USeqAct_PlayCameraAnim::UserDefinedSpaceActor)
        .def("StaticClass", &USeqAct_PlayCameraAnim::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_PlayCameraAnim::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}