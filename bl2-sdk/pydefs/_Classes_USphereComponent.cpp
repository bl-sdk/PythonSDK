#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USphereComponent()
{
    py::class_< USphereComponent,  UCylinderComponent   >("USphereComponent")
        .def("StaticClass", &USphereComponent::StaticClass, py::return_value_policy::reference)
        .def("SetSphereSize", &USphereComponent::SetSphereSize)
        .staticmethod("StaticClass")
  ;
}