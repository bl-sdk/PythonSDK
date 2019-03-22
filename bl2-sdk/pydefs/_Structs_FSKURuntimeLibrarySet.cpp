#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSKURuntimeLibrarySet(py::module &m)
{
    py::class_< FSKURuntimeLibrarySet >(m, "FSKURuntimeLibrarySet")
        .def_readwrite("Id", &FSKURuntimeLibrarySet::Id)
  ;
}