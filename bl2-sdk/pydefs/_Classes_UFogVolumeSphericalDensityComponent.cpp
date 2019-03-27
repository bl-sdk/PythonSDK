#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFogVolumeSphericalDensityComponent(py::module &m)
{
    py::class_< UFogVolumeSphericalDensityComponent,  UFogVolumeDensityComponent   >(m, "UFogVolumeSphericalDensityComponent")
		.def_static("StaticClass", &UFogVolumeSphericalDensityComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxDensity", &UFogVolumeSphericalDensityComponent::MaxDensity)
        .def_readwrite("SphereCenter", &UFogVolumeSphericalDensityComponent::SphereCenter)
        .def_readwrite("SphereRadius", &UFogVolumeSphericalDensityComponent::SphereRadius)
        .def_readwrite("PreviewSphereRadius", &UFogVolumeSphericalDensityComponent::PreviewSphereRadius)
          ;
}