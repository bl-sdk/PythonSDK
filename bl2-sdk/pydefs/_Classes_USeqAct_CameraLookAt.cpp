#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_CameraLookAt()
{
    class_< USeqAct_CameraLookAt, bases< USequenceAction >  , boost::noncopyable>("USeqAct_CameraLookAt", no_init)
        .def_readwrite("InterpSpeedRange", &USeqAct_CameraLookAt::InterpSpeedRange)
        .def_readwrite("InFocusFOV", &USeqAct_CameraLookAt::InFocusFOV)
        .def_readwrite("FocusBoneName", &USeqAct_CameraLookAt::FocusBoneName)
        .def_readwrite("TextDisplay", &USeqAct_CameraLookAt::TextDisplay)
        .def_readwrite("TotalTime", &USeqAct_CameraLookAt::TotalTime)
        .def_readwrite("CameraFOV", &USeqAct_CameraLookAt::CameraFOV)
        .def_readwrite("RemainingTime", &USeqAct_CameraLookAt::RemainingTime)
        .def("StaticClass", &USeqAct_CameraLookAt::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_CameraLookAt::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}