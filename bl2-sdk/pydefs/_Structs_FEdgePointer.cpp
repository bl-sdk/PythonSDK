#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEdgePointer()
{
    class_< FEdgePointer >("FEdgePointer", no_init)
        .def_readwrite("Dummy", &FEdgePointer::Dummy)
  ;
}