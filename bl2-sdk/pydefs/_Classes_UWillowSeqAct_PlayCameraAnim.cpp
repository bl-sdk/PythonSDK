#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_PlayCameraAnim(py::module &m)
{
    py::class_< UWillowSeqAct_PlayCameraAnim,  USequenceAction   >(m, "UWillowSeqAct_PlayCameraAnim")
        .def_readwrite("AnimToPlay", &UWillowSeqAct_PlayCameraAnim::AnimToPlay)
        .def_readwrite("BlendInTime", &UWillowSeqAct_PlayCameraAnim::BlendInTime)
        .def_readwrite("BlendOutTime", &UWillowSeqAct_PlayCameraAnim::BlendOutTime)
        .def_readwrite("Rate", &UWillowSeqAct_PlayCameraAnim::Rate)
        .def_readwrite("IntensityScale", &UWillowSeqAct_PlayCameraAnim::IntensityScale)
          ;
}