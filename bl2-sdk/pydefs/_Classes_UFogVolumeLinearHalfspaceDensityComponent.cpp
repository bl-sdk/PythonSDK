#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFogVolumeLinearHalfspaceDensityComponent(py::module &m)
{
    py::class_< UFogVolumeLinearHalfspaceDensityComponent,  UFogVolumeDensityComponent   >(m, "UFogVolumeLinearHalfspaceDensityComponent")
        .def_readwrite("PlaneDistanceFactor", &UFogVolumeLinearHalfspaceDensityComponent::PlaneDistanceFactor)
        .def_readwrite("HalfspacePlane", &UFogVolumeLinearHalfspaceDensityComponent::HalfspacePlane)
          ;
}