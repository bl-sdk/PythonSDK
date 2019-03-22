#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMotionBlurEffect(py::module &m)
{
    py::class_< UMotionBlurEffect,  UPostProcessEffect   >(m, "UMotionBlurEffect")
        .def_readwrite("MaxVelocity", &UMotionBlurEffect::MaxVelocity)
        .def_readwrite("MotionBlurAmount", &UMotionBlurEffect::MotionBlurAmount)
        .def_readwrite("CameraRotationThreshold", &UMotionBlurEffect::CameraRotationThreshold)
        .def_readwrite("CameraTranslationThreshold", &UMotionBlurEffect::CameraTranslationThreshold)
        .def("StaticClass", &UMotionBlurEffect::StaticClass, py::return_value_policy::reference)
          ;
}