#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetCameraTarget()
{
    class_< USeqAct_SetCameraTarget, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetCameraTarget", no_init)
        .def_readwrite("CameraTarget", &USeqAct_SetCameraTarget::CameraTarget)
        .def_readwrite("TransitionParams", &USeqAct_SetCameraTarget::TransitionParams)
        .def("StaticClass", &USeqAct_SetCameraTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_SetCameraTarget::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}