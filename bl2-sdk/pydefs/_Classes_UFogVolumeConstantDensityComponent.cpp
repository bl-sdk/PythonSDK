#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFogVolumeConstantDensityComponent()
{
    py::class_< UFogVolumeConstantDensityComponent,  UFogVolumeDensityComponent   >("UFogVolumeConstantDensityComponent")
        .def_readwrite("Density", &UFogVolumeConstantDensityComponent::Density)
        .def("StaticClass", &UFogVolumeConstantDensityComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}