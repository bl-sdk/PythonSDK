#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFogVolumeLinearHalfspaceDensityComponent()
{
    py::class_< UFogVolumeLinearHalfspaceDensityComponent,  UFogVolumeDensityComponent   >("UFogVolumeLinearHalfspaceDensityComponent")
        .def_readwrite("PlaneDistanceFactor", &UFogVolumeLinearHalfspaceDensityComponent::PlaneDistanceFactor)
        .def_readwrite("HalfspacePlane", &UFogVolumeLinearHalfspaceDensityComponent::HalfspacePlane)
        .def("StaticClass", &UFogVolumeLinearHalfspaceDensityComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}