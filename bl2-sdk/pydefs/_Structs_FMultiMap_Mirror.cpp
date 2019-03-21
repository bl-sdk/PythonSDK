#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMultiMap_Mirror(py::object m)
{
    py::class_< FMultiMap_Mirror >(m, "FMultiMap_Mirror")
        .def_readwrite("Pairs", &FMultiMap_Mirror::Pairs)
  ;
}