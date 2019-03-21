#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHeavyInventoryElement()
{
    py::class_< FHeavyInventoryElement >("FHeavyInventoryElement")
        .def_readwrite("Text", &FHeavyInventoryElement::Text)
        .def_readwrite("Color", &FHeavyInventoryElement::Color)
        .def_readwrite("Data", &FHeavyInventoryElement::Data)
  ;
}