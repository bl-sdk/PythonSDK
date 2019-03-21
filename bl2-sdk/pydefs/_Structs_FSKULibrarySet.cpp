#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSKULibrarySet(py::object m)
{
    py::class_< FSKULibrarySet >(m, "FSKULibrarySet")
        .def_readwrite("Id", &FSKULibrarySet::Id)
        .def_readwrite("NameID", &FSKULibrarySet::NameID)
        .def_readwrite("LibrarySetPackage", &FSKULibrarySet::LibrarySetPackage)
        .def_readwrite("CachedDlcALDefRef", &FSKULibrarySet::CachedDlcALDefRef)
  ;
}