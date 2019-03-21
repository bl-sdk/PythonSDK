#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFogVolumeSphericalDensityComponent(py::object m)
{
    py::class_< UFogVolumeSphericalDensityComponent,  UFogVolumeDensityComponent   >(m, "UFogVolumeSphericalDensityComponent")
        .def_readwrite("MaxDensity", &UFogVolumeSphericalDensityComponent::MaxDensity)
        .def_readwrite("SphereCenter", &UFogVolumeSphericalDensityComponent::SphereCenter)
        .def_readwrite("SphereRadius", &UFogVolumeSphericalDensityComponent::SphereRadius)
        .def_readwrite("PreviewSphereRadius", &UFogVolumeSphericalDensityComponent::PreviewSphereRadius)
        .def("StaticClass", &UFogVolumeSphericalDensityComponent::StaticClass, py::return_value_policy::reference)
          ;
}