#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FResolution()
{
    class_< FResolution >("FResolution", no_init)
        .def_readwrite("Width", &FResolution::Width)
        .def_readwrite("Height", &FResolution::Height)
  ;
}