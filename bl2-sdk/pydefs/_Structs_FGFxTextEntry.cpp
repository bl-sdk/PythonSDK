#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGFxTextEntry(py::object m)
{
    py::class_< FGFxTextEntry >(m, "FGFxTextEntry")
        .def_readwrite("ArrayIdx", &FGFxTextEntry::ArrayIdx)
        .def_readwrite("Kind", &FGFxTextEntry::Kind)
  ;
}