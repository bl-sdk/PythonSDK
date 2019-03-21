#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorParameters()
{
    class_< FBehaviorParameters >("FBehaviorParameters", no_init)
        .def_readwrite("Parameters", &FBehaviorParameters::Parameters)
  ;
}