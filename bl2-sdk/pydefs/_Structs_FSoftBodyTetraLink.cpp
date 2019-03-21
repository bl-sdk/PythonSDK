#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoftBodyTetraLink(py::object m)
{
    py::class_< FSoftBodyTetraLink >(m, "FSoftBodyTetraLink")
        .def_readwrite("Index", &FSoftBodyTetraLink::Index)
        .def_readwrite("Bary", &FSoftBodyTetraLink::Bary)
  ;
}