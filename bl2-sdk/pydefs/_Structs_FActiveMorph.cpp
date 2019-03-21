#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActiveMorph()
{
    class_< FActiveMorph >("FActiveMorph", no_init)
        .def_readwrite("Target", &FActiveMorph::Target)
        .def_readwrite("Weight", &FActiveMorph::Weight)
  ;
}