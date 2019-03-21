#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetMotionBlurParams(py::object m)
{
    py::class_< USeqAct_SetMotionBlurParams,  USeqAct_Latent   >(m, "USeqAct_SetMotionBlurParams")
        .def_readwrite("MotionBlurAmount", &USeqAct_SetMotionBlurParams::MotionBlurAmount)
        .def_readwrite("InterpolateSeconds", &USeqAct_SetMotionBlurParams::InterpolateSeconds)
        .def_readwrite("InterpolateElapsed", &USeqAct_SetMotionBlurParams::InterpolateElapsed)
        .def_readwrite("OldMotionBlurAmount", &USeqAct_SetMotionBlurParams::OldMotionBlurAmount)
        .def("StaticClass", &USeqAct_SetMotionBlurParams::StaticClass, py::return_value_policy::reference)
          ;
}