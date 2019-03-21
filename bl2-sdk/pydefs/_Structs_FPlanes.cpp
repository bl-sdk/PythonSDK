#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlane()
{
    class_< FPlane, bases< FVector >  >("FPlane", no_init)
        .def_readwrite("W", &FPlane::W)
  ;
}