#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIniLocFileEntry()
{
    py::class_< FIniLocFileEntry >("FIniLocFileEntry")
        .def_readwrite("Filename", &FIniLocFileEntry::Filename)
        .def_readwrite("ReadState", &FIniLocFileEntry::ReadState)
  ;
}