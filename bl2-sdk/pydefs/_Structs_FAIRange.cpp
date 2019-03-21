#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAIRange()
{
    class_< FAIRange >("FAIRange", no_init)
        .def_readwrite("MinVal", &FAIRange::MinVal)
        .def_readwrite("MaxVal", &FAIRange::MaxVal)
  ;
}