#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHeavyInventoryElement()
{
    class_< FHeavyInventoryElement >("FHeavyInventoryElement", no_init)
        .def_readwrite("Text", &FHeavyInventoryElement::Text)
        .def_readwrite("Color", &FHeavyInventoryElement::Color)
        .def_readwrite("Data", &FHeavyInventoryElement::Data)
  ;
}