#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPackedNormal()
{
    class_< FPackedNormal >("FPackedNormal", no_init)
        .def_readwrite("X", &FPackedNormal::X)
        .def_readwrite("Y", &FPackedNormal::Y)
        .def_readwrite("Z", &FPackedNormal::Z)
        .def_readwrite("W", &FPackedNormal::W)
  ;
}