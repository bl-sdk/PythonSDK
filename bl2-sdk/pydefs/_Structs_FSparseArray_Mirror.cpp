#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSparseArray_Mirror(py::module &m)
{
    py::class_< FSparseArray_Mirror >(m, "FSparseArray_Mirror")
        .def_readwrite("Elements", &FSparseArray_Mirror::Elements)
        .def_readwrite("AllocationFlags", &FSparseArray_Mirror::AllocationFlags)
        .def_readwrite("FirstFreeIndex", &FSparseArray_Mirror::FirstFreeIndex)
        .def_readwrite("NumFreeIndices", &FSparseArray_Mirror::NumFreeIndices)
  ;
}