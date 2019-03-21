#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FObjectReference()
{
    class_< FObjectReference >("FObjectReference", no_init)
        .def_readwrite("Obj", &FObjectReference::Obj)
  ;
}