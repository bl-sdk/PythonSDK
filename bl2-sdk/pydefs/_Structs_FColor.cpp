#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FColor()
{
    class_< FColor >("FColor", no_init)
        .def_readwrite("B", &FColor::B)
        .def_readwrite("G", &FColor::G)
        .def_readwrite("R", &FColor::R)
        .def_readwrite("A", &FColor::A)
  ;
}