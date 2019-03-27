#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawSphereComponent(py::module &m)
{
    py::class_< UDrawSphereComponent,  UPrimitiveComponent   >(m, "UDrawSphereComponent")
		.def_static("StaticClass", &UDrawSphereComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SphereColor", &UDrawSphereComponent::SphereColor)
        .def_readwrite("SphereMaterial", &UDrawSphereComponent::SphereMaterial)
        .def_readwrite("SphereRadius", &UDrawSphereComponent::SphereRadius)
        .def_readwrite("SphereSides", &UDrawSphereComponent::SphereSides)
          ;
}