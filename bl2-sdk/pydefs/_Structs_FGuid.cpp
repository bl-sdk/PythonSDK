#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGuid()
{
    class_< FGuid >("FGuid", no_init)
        .def_readwrite("A", &FGuid::A)
        .def_readwrite("B", &FGuid::B)
        .def_readwrite("C", &FGuid::C)
        .def_readwrite("D", &FGuid::D)
  ;
}