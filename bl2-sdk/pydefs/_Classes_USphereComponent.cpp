#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USphereComponent(py::module &m)
{
    py::class_< USphereComponent,  UCylinderComponent   >(m, "USphereComponent")
        .def("SetSphereSize", &USphereComponent::SetSphereSize)
          ;
}