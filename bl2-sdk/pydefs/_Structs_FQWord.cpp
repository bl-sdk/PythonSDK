#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FQWord()
{
    class_< FQWord >("FQWord", no_init)
        .def_readwrite("A", &FQWord::A)
        .def_readwrite("B", &FQWord::B)
  ;
}