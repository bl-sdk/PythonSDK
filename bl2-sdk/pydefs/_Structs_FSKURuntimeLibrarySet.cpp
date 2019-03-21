#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSKURuntimeLibrarySet()
{
    py::class_< FSKURuntimeLibrarySet >("FSKURuntimeLibrarySet")
        .def_readwrite("Id", &FSKURuntimeLibrarySet::Id)
        .def_readonly("Libraries", &FSKURuntimeLibrarySet::Libraries)
  ;
}