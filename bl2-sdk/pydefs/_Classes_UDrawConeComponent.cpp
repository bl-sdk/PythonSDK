#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawConeComponent(py::module &m)
{
    py::class_< UDrawConeComponent,  UPrimitiveComponent   >(m, "UDrawConeComponent")
        .def_readwrite("ConeColor", &UDrawConeComponent::ConeColor)
        .def_readwrite("ConeRadius", &UDrawConeComponent::ConeRadius)
        .def_readwrite("ConeAngle", &UDrawConeComponent::ConeAngle)
        .def_readwrite("ConeSides", &UDrawConeComponent::ConeSides)
          ;
}