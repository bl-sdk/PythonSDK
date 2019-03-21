#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIntPoint()
{
    class_< FIntPoint >("FIntPoint", no_init)
        .def_readwrite("X", &FIntPoint::X)
        .def_readwrite("Y", &FIntPoint::Y)
  ;
}