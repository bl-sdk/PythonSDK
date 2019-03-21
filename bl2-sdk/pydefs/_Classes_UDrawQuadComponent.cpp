#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawQuadComponent()
{
    py::class_< UDrawQuadComponent,  UPrimitiveComponent   >("UDrawQuadComponent")
        .def_readwrite("Texture", &UDrawQuadComponent::Texture)
        .def_readwrite("Width", &UDrawQuadComponent::Width)
        .def_readwrite("Height", &UDrawQuadComponent::Height)
        .def("StaticClass", &UDrawQuadComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}