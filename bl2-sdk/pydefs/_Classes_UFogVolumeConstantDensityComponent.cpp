#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFogVolumeConstantDensityComponent()
{
    class_< UFogVolumeConstantDensityComponent, bases< UFogVolumeDensityComponent >  , boost::noncopyable>("UFogVolumeConstantDensityComponent", no_init)
        .def_readwrite("Density", &UFogVolumeConstantDensityComponent::Density)
        .def("StaticClass", &UFogVolumeConstantDensityComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}