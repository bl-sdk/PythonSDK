#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlane2D()
{
    class_< FPlane2D, bases< FVector2D >  >("FPlane2D", no_init)
        .def_readwrite("W", &FPlane2D::W)
  ;
}