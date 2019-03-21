#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKSphylElem(py::object m)
{
    py::class_< FKSphylElem >(m, "FKSphylElem")
        .def_readwrite("TM", &FKSphylElem::TM)
        .def_readwrite("Radius", &FKSphylElem::Radius)
        .def_readwrite("Length", &FKSphylElem::Length)
  ;
}