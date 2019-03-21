#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRange()
{
    class_< FRange >("FRange", no_init)
        .def_readwrite("MinValue", &FRange::MinValue)
        .def_readwrite("MaxValue", &FRange::MaxValue)
  ;
}