#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHeightFogComponent(py::module &m)
{
    py::class_< UHeightFogComponent,  UActorComponent   >(m, "UHeightFogComponent")
        .def_readwrite("Height", &UHeightFogComponent::Height)
        .def_readwrite("Density", &UHeightFogComponent::Density)
        .def_readwrite("LightBrightness", &UHeightFogComponent::LightBrightness)
        .def_readwrite("LightColor", &UHeightFogComponent::LightColor)
        .def_readwrite("ExtinctionDistance", &UHeightFogComponent::ExtinctionDistance)
        .def_readwrite("StartDistance", &UHeightFogComponent::StartDistance)
        .def("SetEnabled", &UHeightFogComponent::SetEnabled)
          ;
}