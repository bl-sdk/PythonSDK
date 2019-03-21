#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLinearColor()
{
    class_< FLinearColor >("FLinearColor", no_init)
        .def_readwrite("R", &FLinearColor::R)
        .def_readwrite("G", &FLinearColor::G)
        .def_readwrite("B", &FLinearColor::B)
        .def_readwrite("A", &FLinearColor::A)
  ;
}