#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PlayCameraAnim(py::module &m)
{
    py::class_< USeqAct_PlayCameraAnim,  USequenceAction   >(m, "USeqAct_PlayCameraAnim")
		.def_static("StaticClass", &USeqAct_PlayCameraAnim::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CameraAnim", &USeqAct_PlayCameraAnim::CameraAnim)
        .def_readwrite("BlendInTime", &USeqAct_PlayCameraAnim::BlendInTime)
        .def_readwrite("BlendOutTime", &USeqAct_PlayCameraAnim::BlendOutTime)
        .def_readwrite("Rate", &USeqAct_PlayCameraAnim::Rate)
        .def_readwrite("IntensityScale", &USeqAct_PlayCameraAnim::IntensityScale)
        .def_readwrite("PlaySpace", &USeqAct_PlayCameraAnim::PlaySpace)
        .def_readwrite("UserDefinedSpaceActor", &USeqAct_PlayCameraAnim::UserDefinedSpaceActor)
        .def("eventGetObjClassVersion", &USeqAct_PlayCameraAnim::eventGetObjClassVersion)
          ;
}