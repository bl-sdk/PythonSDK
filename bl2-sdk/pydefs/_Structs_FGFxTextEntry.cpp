#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGFxTextEntry()
{
    class_< FGFxTextEntry >("FGFxTextEntry", no_init)
        .def_readwrite("ArrayIdx", &FGFxTextEntry::ArrayIdx)
        .def_readwrite("Kind", &FGFxTextEntry::Kind)
  ;
}