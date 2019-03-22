#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CameraLookAt(py::module &m)
{
    py::class_< USeqAct_CameraLookAt,  USequenceAction   >(m, "USeqAct_CameraLookAt")
        .def_readwrite("InterpSpeedRange", &USeqAct_CameraLookAt::InterpSpeedRange)
        .def_readwrite("InFocusFOV", &USeqAct_CameraLookAt::InFocusFOV)
        .def_readwrite("FocusBoneName", &USeqAct_CameraLookAt::FocusBoneName)
        .def_readwrite("TextDisplay", &USeqAct_CameraLookAt::TextDisplay)
        .def_readwrite("TotalTime", &USeqAct_CameraLookAt::TotalTime)
        .def_readwrite("CameraFOV", &USeqAct_CameraLookAt::CameraFOV)
        .def_readwrite("RemainingTime", &USeqAct_CameraLookAt::RemainingTime)
        .def("eventGetObjClassVersion", &USeqAct_CameraLookAt::eventGetObjClassVersion)
          ;
}