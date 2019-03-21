#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFogVolumeConeDensityComponent()
{
    class_< UFogVolumeConeDensityComponent, bases< UFogVolumeDensityComponent >  , boost::noncopyable>("UFogVolumeConeDensityComponent", no_init)
        .def_readwrite("MaxDensity", &UFogVolumeConeDensityComponent::MaxDensity)
        .def_readwrite("ConeVertex", &UFogVolumeConeDensityComponent::ConeVertex)
        .def_readwrite("ConeRadius", &UFogVolumeConeDensityComponent::ConeRadius)
        .def_readwrite("ConeAxis", &UFogVolumeConeDensityComponent::ConeAxis)
        .def_readwrite("ConeMaxAngle", &UFogVolumeConeDensityComponent::ConeMaxAngle)
        .def_readwrite("PreviewCone", &UFogVolumeConeDensityComponent::PreviewCone)
        .def("StaticClass", &UFogVolumeConeDensityComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}