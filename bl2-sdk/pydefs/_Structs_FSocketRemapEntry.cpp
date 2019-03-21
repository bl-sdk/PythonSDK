#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSocketRemapEntry()
{
    class_< FSocketRemapEntry >("FSocketRemapEntry", no_init)
        .def_readwrite("OriginalSocketName", &FSocketRemapEntry::OriginalSocketName)
        .def_readwrite("MangledSocketName", &FSocketRemapEntry::MangledSocketName)
  ;
}