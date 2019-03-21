#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFogVolumeSphericalDensityComponent()
{
    class_< UFogVolumeSphericalDensityComponent, bases< UFogVolumeDensityComponent >  , boost::noncopyable>("UFogVolumeSphericalDensityComponent", no_init)
        .def_readwrite("MaxDensity", &UFogVolumeSphericalDensityComponent::MaxDensity)
        .def_readwrite("SphereCenter", &UFogVolumeSphericalDensityComponent::SphereCenter)
        .def_readwrite("SphereRadius", &UFogVolumeSphericalDensityComponent::SphereRadius)
        .def_readwrite("PreviewSphereRadius", &UFogVolumeSphericalDensityComponent::PreviewSphereRadius)
        .def("StaticClass", &UFogVolumeSphericalDensityComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}