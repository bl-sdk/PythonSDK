#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFogVolumeConstantDensityComponent(py::object m)
{
    py::class_< UFogVolumeConstantDensityComponent,  UFogVolumeDensityComponent   >(m, "UFogVolumeConstantDensityComponent")
        .def_readwrite("Density", &UFogVolumeConstantDensityComponent::Density)
        .def("StaticClass", &UFogVolumeConstantDensityComponent::StaticClass, py::return_value_policy::reference)
          ;
}