#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPointer(py::object m)
{
    py::class_< FPointer >(m, "FPointer")
        .def_readwrite("Dummy", &FPointer::Dummy)
  ;
}