#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScaledHUDElement(py::module &m)
{
    py::class_< FScaledHUDElement >(m, "FScaledHUDElement")
        .def_readwrite("ElementName", &FScaledHUDElement::ElementName)
        .def_readwrite("Anchor", &FScaledHUDElement::Anchor)
  ;
}