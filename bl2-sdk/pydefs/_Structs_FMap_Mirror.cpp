#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMap_Mirror()
{
    class_< FMap_Mirror >("FMap_Mirror", no_init)
        .def_readwrite("Pairs", &FMap_Mirror::Pairs)
  ;
}