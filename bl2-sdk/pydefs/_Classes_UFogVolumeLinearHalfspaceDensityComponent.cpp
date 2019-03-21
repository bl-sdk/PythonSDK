#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFogVolumeLinearHalfspaceDensityComponent()
{
    class_< UFogVolumeLinearHalfspaceDensityComponent, bases< UFogVolumeDensityComponent >  , boost::noncopyable>("UFogVolumeLinearHalfspaceDensityComponent", no_init)
        .def_readwrite("PlaneDistanceFactor", &UFogVolumeLinearHalfspaceDensityComponent::PlaneDistanceFactor)
        .def_readwrite("HalfspacePlane", &UFogVolumeLinearHalfspaceDensityComponent::HalfspacePlane)
        .def("StaticClass", &UFogVolumeLinearHalfspaceDensityComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}