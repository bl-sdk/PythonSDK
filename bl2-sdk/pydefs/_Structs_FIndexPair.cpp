#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIndexPair()
{
    class_< FIndexPair >("FIndexPair", no_init)
        .def_readwrite("Index1", &FIndexPair::Index1)
        .def_readwrite("Index2", &FIndexPair::Index2)
  ;
}