#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPointer()
{
    class_< FPointer >("FPointer", no_init)
        .def_readwrite("Dummy", &FPointer::Dummy)
  ;
}