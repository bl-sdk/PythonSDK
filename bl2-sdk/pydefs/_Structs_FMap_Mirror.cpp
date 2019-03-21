#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMap_Mirror(py::object m)
{
    py::class_< FMap_Mirror >(m, "FMap_Mirror")
        .def_readwrite("Pairs", &FMap_Mirror::Pairs)
  ;
}