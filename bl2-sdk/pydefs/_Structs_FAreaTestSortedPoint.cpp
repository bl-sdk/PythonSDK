#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAreaTestSortedPoint()
{
    class_< FAreaTestSortedPoint >("FAreaTestSortedPoint", no_init)
        .def_readwrite("Nav", &FAreaTestSortedPoint::Nav)
        .def_readwrite("DistSq", &FAreaTestSortedPoint::DistSq)
  ;
}