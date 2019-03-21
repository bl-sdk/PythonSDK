#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFogVolumeConeDensityComponent(py::object m)
{
    py::class_< UFogVolumeConeDensityComponent,  UFogVolumeDensityComponent   >(m, "UFogVolumeConeDensityComponent")
        .def_readwrite("MaxDensity", &UFogVolumeConeDensityComponent::MaxDensity)
        .def_readwrite("ConeVertex", &UFogVolumeConeDensityComponent::ConeVertex)
        .def_readwrite("ConeRadius", &UFogVolumeConeDensityComponent::ConeRadius)
        .def_readwrite("ConeAxis", &UFogVolumeConeDensityComponent::ConeAxis)
        .def_readwrite("ConeMaxAngle", &UFogVolumeConeDensityComponent::ConeMaxAngle)
        .def_readwrite("PreviewCone", &UFogVolumeConeDensityComponent::PreviewCone)
        .def("StaticClass", &UFogVolumeConeDensityComponent::StaticClass, py::return_value_policy::reference)
          ;
}