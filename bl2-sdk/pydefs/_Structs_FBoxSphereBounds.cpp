#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBoxSphereBounds()
{
    class_< FBoxSphereBounds >("FBoxSphereBounds", no_init)
        .def_readwrite("Origin", &FBoxSphereBounds::Origin)
        .def_readwrite("BoxExtent", &FBoxSphereBounds::BoxExtent)
        .def_readwrite("SphereRadius", &FBoxSphereBounds::SphereRadius)
  ;
}