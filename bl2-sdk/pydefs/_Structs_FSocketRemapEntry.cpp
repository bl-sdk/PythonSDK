#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSocketRemapEntry()
{
    py::class_< FSocketRemapEntry >("FSocketRemapEntry")
        .def_readwrite("OriginalSocketName", &FSocketRemapEntry::OriginalSocketName)
        .def_readwrite("MangledSocketName", &FSocketRemapEntry::MangledSocketName)
  ;
}