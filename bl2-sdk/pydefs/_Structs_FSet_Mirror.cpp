#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSet_Mirror(py::module &m)
{
    py::class_< FSet_Mirror >(m, "FSet_Mirror")
        .def_readwrite("Elements", &FSet_Mirror::Elements)
        .def_readwrite("InlineHash", &FSet_Mirror::InlineHash)
        .def_readwrite("Hash", &FSet_Mirror::Hash)
        .def_readwrite("HashSize", &FSet_Mirror::HashSize)
  ;
}