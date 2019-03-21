#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPlayerCamera()
{
    py::class_< AWillowPlayerCamera,  AGearboxCameraBasic   >("AWillowPlayerCamera")
        .def("StaticClass", &AWillowPlayerCamera::StaticClass, py::return_value_policy::reference)
        .def("UpdateViewTarget", &AWillowPlayerCamera::UpdateViewTarget)
        .def("PostBeginPlay", &AWillowPlayerCamera::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}