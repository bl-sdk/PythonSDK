#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKCachedConvexData()
{
    class_< FKCachedConvexData >("FKCachedConvexData", no_init)
        .def_readwrite("CachedConvexElements", &FKCachedConvexData::CachedConvexElements)
  ;
}