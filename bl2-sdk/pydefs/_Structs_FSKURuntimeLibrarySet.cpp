#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSKURuntimeLibrarySet(py::object m)
{
    py::class_< FSKURuntimeLibrarySet >(m, "FSKURuntimeLibrarySet")
        .def_readwrite("Id", &FSKURuntimeLibrarySet::Id)
  ;
}