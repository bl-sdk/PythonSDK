#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSHVector()
{
    class_< FSHVector >("FSHVector", no_init)
        .def_readonly("V", &FSHVector::V)
        .def_readonly("Padding", &FSHVector::Padding)
  ;
}