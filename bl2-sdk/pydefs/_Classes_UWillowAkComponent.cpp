#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAkComponent()
{
    py::class_< UWillowAkComponent,  UAkComponent   >("UWillowAkComponent")
        .def_readwrite("DistanceRTPCRefCount", &UWillowAkComponent::DistanceRTPCRefCount)
        .def_readwrite("SpeedRTPCRefCount", &UWillowAkComponent::SpeedRTPCRefCount)
        .def_readwrite("ApproachSpeedRTPCRefCount", &UWillowAkComponent::ApproachSpeedRTPCRefCount)
        .def_readwrite("CustomVelocity", &UWillowAkComponent::CustomVelocity)
        .def("StaticClass", &UWillowAkComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}