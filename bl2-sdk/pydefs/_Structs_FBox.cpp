#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBox()
{
    class_< FBox >("FBox", no_init)
        .def_readwrite("Min", &FBox::Min)
        .def_readwrite("Max", &FBox::Max)
        .def_readwrite("IsValid", &FBox::IsValid)
  ;
}