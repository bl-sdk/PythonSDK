#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawCylinderComponent(py::module &m)
{
    py::class_< UDrawCylinderComponent,  UPrimitiveComponent   >(m, "UDrawCylinderComponent")
		.def_static("StaticClass", &UDrawCylinderComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CylinderColor", &UDrawCylinderComponent::CylinderColor)
        .def_readwrite("CylinderMaterial", &UDrawCylinderComponent::CylinderMaterial)
        .def_readwrite("CylinderRadius", &UDrawCylinderComponent::CylinderRadius)
        .def_readwrite("CylinderTopRadius", &UDrawCylinderComponent::CylinderTopRadius)
        .def_readwrite("CylinderHeight", &UDrawCylinderComponent::CylinderHeight)
        .def_readwrite("CylinderHeightOffset", &UDrawCylinderComponent::CylinderHeightOffset)
        .def_readwrite("CylinderSides", &UDrawCylinderComponent::CylinderSides)
          ;
}