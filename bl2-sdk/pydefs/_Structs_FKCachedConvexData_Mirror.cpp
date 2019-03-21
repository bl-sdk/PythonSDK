#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKCachedConvexData_Mirror()
{
    class_< FKCachedConvexData_Mirror >("FKCachedConvexData_Mirror", no_init)
        .def_readwrite("CachedConvexElements", &FKCachedConvexData_Mirror::CachedConvexElements)
  ;
}