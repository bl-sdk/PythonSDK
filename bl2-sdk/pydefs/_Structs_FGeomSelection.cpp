#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGeomSelection()
{
    py::class_< FGeomSelection >("FGeomSelection")
        .def_readwrite("Type", &FGeomSelection::Type)
        .def_readwrite("Index", &FGeomSelection::Index)
        .def_readwrite("SelectionIndex", &FGeomSelection::SelectionIndex)
  ;
}