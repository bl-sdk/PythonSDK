#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USphereComponent(py::module &m)
{
    py::class_< USphereComponent,  UCylinderComponent   >(m, "USphereComponent")
		.def_static("StaticClass", &USphereComponent::StaticClass, py::return_value_policy::reference)
        .def("SetSphereSize", &USphereComponent::SetSphereSize)
          ;
}