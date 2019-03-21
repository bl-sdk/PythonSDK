#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FQuat()
{
    class_< FQuat >("FQuat", no_init)
        .def_readwrite("X", &FQuat::X)
        .def_readwrite("Y", &FQuat::Y)
        .def_readwrite("Z", &FQuat::Z)
        .def_readwrite("W", &FQuat::W)
  ;
}