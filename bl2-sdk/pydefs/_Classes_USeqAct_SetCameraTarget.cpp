#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetCameraTarget()
{
    py::class_< USeqAct_SetCameraTarget,  USequenceAction   >("USeqAct_SetCameraTarget")
        .def_readwrite("CameraTarget", &USeqAct_SetCameraTarget::CameraTarget)
        .def_readwrite("TransitionParams", &USeqAct_SetCameraTarget::TransitionParams)
        .def("StaticClass", &USeqAct_SetCameraTarget::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_SetCameraTarget::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}