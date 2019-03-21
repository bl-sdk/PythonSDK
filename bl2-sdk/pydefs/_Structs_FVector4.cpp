#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVector4()
{
    class_< FVector4 >("FVector4", no_init)
        .def_readwrite("X", &FVector4::X)
        .def_readwrite("Y", &FVector4::Y)
        .def_readwrite("Z", &FVector4::Z)
        .def_readwrite("W", &FVector4::W)
  ;
}