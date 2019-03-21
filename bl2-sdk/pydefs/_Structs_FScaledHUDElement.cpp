#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScaledHUDElement()
{
    class_< FScaledHUDElement >("FScaledHUDElement", no_init)
        .def_readwrite("ElementName", &FScaledHUDElement::ElementName)
        .def_readwrite("Anchor", &FScaledHUDElement::Anchor)
  ;
}