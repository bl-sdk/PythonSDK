#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSHVectorRGB()
{
    class_< FSHVectorRGB >("FSHVectorRGB", no_init)
        .def_readwrite("R", &FSHVectorRGB::R)
        .def_readwrite("G", &FSHVectorRGB::G)
        .def_readwrite("B", &FSHVectorRGB::B)
  ;
}