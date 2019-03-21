#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpawnOption()
{
    class_< FSpawnOption >("FSpawnOption", no_init)
        .def_readwrite("Factory", &FSpawnOption::Factory)
        .def_readwrite("ComputedProbability", &FSpawnOption::ComputedProbability)
  ;
}