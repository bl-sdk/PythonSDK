#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawCapsuleComponent(py::module &m)
{
    py::class_< UDrawCapsuleComponent,  UPrimitiveComponent   >(m, "UDrawCapsuleComponent")
        .def_readwrite("CapsuleColor", &UDrawCapsuleComponent::CapsuleColor)
        .def_readwrite("CapsuleMaterial", &UDrawCapsuleComponent::CapsuleMaterial)
        .def_readwrite("CapsuleHeight", &UDrawCapsuleComponent::CapsuleHeight)
        .def_readwrite("CapsuleRadius", &UDrawCapsuleComponent::CapsuleRadius)
          ;
}