#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCylinder()
{
    class_< FCylinder >("FCylinder", no_init)
        .def_readwrite("Radius", &FCylinder::Radius)
        .def_readwrite("Height", &FCylinder::Height)
  ;
}