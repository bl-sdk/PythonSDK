#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHUDAnchorPoint()
{
    class_< FHUDAnchorPoint >("FHUDAnchorPoint", no_init)
        .def_readwrite("MoviePoint", &FHUDAnchorPoint::MoviePoint)
        .def_readwrite("ScreenPoint", &FHUDAnchorPoint::ScreenPoint)
        .def_readonly("Offset", &FHUDAnchorPoint::Offset)
  ;
}