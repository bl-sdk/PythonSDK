#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCameraAnim(py::module &m)
{
    py::class_< UCameraAnim,  UObject   >(m, "UCameraAnim")
        .def_readwrite("CameraInterpGroup", &UCameraAnim::CameraInterpGroup)
        .def_readwrite("AnimLength", &UCameraAnim::AnimLength)
        .def_readwrite("BoundingBox", &UCameraAnim::BoundingBox)
        .def_readwrite("BasePPSettings", &UCameraAnim::BasePPSettings)
        .def_readwrite("BasePPSettingsAlpha", &UCameraAnim::BasePPSettingsAlpha)
        .def_readwrite("BaseFOV", &UCameraAnim::BaseFOV)
        .def("StaticClass", &UCameraAnim::StaticClass, py::return_value_policy::reference)
          ;
}