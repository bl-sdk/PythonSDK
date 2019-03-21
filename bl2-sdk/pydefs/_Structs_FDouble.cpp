#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDouble()
{
    class_< FDouble >("FDouble", no_init)
        .def_readwrite("A", &FDouble::A)
        .def_readwrite("B", &FDouble::B)
  ;
}