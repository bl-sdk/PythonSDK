#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USceneCaptureReflectComponent()
{
    py::class_< USceneCaptureReflectComponent,  USceneCaptureComponent   >("USceneCaptureReflectComponent")
        .def_readwrite("TextureTarget", &USceneCaptureReflectComponent::TextureTarget)
        .def_readwrite("ScaleFOV", &USceneCaptureReflectComponent::ScaleFOV)
        .def("StaticClass", &USceneCaptureReflectComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}