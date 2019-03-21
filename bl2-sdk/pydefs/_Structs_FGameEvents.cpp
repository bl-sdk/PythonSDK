#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameEvents()
{
    class_< FGameEvents >("FGameEvents", no_init)
        .def_readwrite("Events", &FGameEvents::Events)
  ;
}