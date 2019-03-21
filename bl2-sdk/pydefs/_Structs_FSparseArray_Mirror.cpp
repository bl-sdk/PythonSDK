#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSparseArray_Mirror()
{
    class_< FSparseArray_Mirror >("FSparseArray_Mirror", no_init)
        .def_readwrite("Elements", &FSparseArray_Mirror::Elements)
        .def_readwrite("AllocationFlags", &FSparseArray_Mirror::AllocationFlags)
        .def_readwrite("FirstFreeIndex", &FSparseArray_Mirror::FirstFreeIndex)
        .def_readwrite("NumFreeIndices", &FSparseArray_Mirror::NumFreeIndices)
  ;
}