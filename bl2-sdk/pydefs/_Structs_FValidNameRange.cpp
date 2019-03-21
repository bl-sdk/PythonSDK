#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FValidNameRange()
{
    class_< FValidNameRange >("FValidNameRange", no_init)
        .def_readwrite("Start", &FValidNameRange::Start)
        .def_readwrite("End", &FValidNameRange::End)
  ;
}