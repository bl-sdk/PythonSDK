#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVector2D()
{
    class_< FVector2D >("FVector2D", no_init)
        .def_readwrite("X", &FVector2D::X)
        .def_readwrite("Y", &FVector2D::Y)
  ;
}