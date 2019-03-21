#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawSphereComponent()
{
    py::class_< UDrawSphereComponent,  UPrimitiveComponent   >("UDrawSphereComponent")
        .def_readwrite("SphereColor", &UDrawSphereComponent::SphereColor)
        .def_readwrite("SphereMaterial", &UDrawSphereComponent::SphereMaterial)
        .def_readwrite("SphereRadius", &UDrawSphereComponent::SphereRadius)
        .def_readwrite("SphereSides", &UDrawSphereComponent::SphereSides)
        .def("StaticClass", &UDrawSphereComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}