#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USphereComponent(py::object m)
{
    py::class_< USphereComponent,  UCylinderComponent   >(m, "USphereComponent")
        .def("StaticClass", &USphereComponent::StaticClass, py::return_value_policy::reference)
        .def("SetSphereSize", &USphereComponent::SetSphereSize)
          ;
}