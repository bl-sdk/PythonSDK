#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScaledHUDElement()
{
    py::class_< FScaledHUDElement >("FScaledHUDElement")
        .def_readwrite("ElementName", &FScaledHUDElement::ElementName)
        .def_readwrite("Anchor", &FScaledHUDElement::Anchor)
  ;
}