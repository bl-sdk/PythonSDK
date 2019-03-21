#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIntPoint3D()
{
    class_< FIntPoint3D >("FIntPoint3D", no_init)
        .def_readwrite("X", &FIntPoint3D::X)
        .def_readwrite("Y", &FIntPoint3D::Y)
        .def_readwrite("Z", &FIntPoint3D::Z)
  ;
}