#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMultiMap_Mirror(py::module &m)
{
    py::class_< FMultiMap_Mirror >(m, "FMultiMap_Mirror")
        .def_readwrite("Pairs", &FMultiMap_Mirror::Pairs)
  ;
}