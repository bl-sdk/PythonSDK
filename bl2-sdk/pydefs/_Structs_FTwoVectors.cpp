#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTwoVectors()
{
    class_< FTwoVectors >("FTwoVectors", no_init)
        .def_readwrite("v1", &FTwoVectors::v1)
        .def_readwrite("v2", &FTwoVectors::v2)
  ;
}