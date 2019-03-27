#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHeavyInventoryElement(py::module &m)
{
    py::class_< FHeavyInventoryElement >(m, "FHeavyInventoryElement")
        .def_readwrite("Text", &FHeavyInventoryElement::Text)
        .def_readwrite("Color", &FHeavyInventoryElement::Color)
        .def_readwrite("Data", &FHeavyInventoryElement::Data)
  ;
}