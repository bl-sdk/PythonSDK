#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMultiMap_Mirror()
{
    class_< FMultiMap_Mirror >("FMultiMap_Mirror", no_init)
        .def_readwrite("Pairs", &FMultiMap_Mirror::Pairs)
  ;
}