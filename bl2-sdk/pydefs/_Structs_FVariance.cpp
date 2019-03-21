#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVariance()
{
    class_< FVariance >("FVariance", no_init)
        .def_readwrite("LowerBound", &FVariance::LowerBound)
        .def_readwrite("UpperBound", &FVariance::UpperBound)
  ;
}