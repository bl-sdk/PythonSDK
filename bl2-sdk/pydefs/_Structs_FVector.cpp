#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVector()
{
    class_< FVector >("FVector", no_init)
        .def_readwrite("X", &FVector::X)
        .def_readwrite("Y", &FVector::Y)
        .def_readwrite("Z", &FVector::Z)
  ;
}