#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGeomSelection(py::object m)
{
    py::class_< FGeomSelection >(m, "FGeomSelection")
        .def_readwrite("Type", &FGeomSelection::Type)
        .def_readwrite("Index", &FGeomSelection::Index)
        .def_readwrite("SelectionIndex", &FGeomSelection::SelectionIndex)
  ;
}