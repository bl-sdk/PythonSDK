#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPointer()
{
    py::class_< FPointer >("FPointer")
        .def_readwrite("Dummy", &FPointer::Dummy)
  ;
}