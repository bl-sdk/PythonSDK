#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKSphylElem()
{
    py::class_< FKSphylElem >("FKSphylElem")
        .def_readwrite("TM", &FKSphylElem::TM)
        .def_readwrite("Radius", &FKSphylElem::Radius)
        .def_readwrite("Length", &FKSphylElem::Length)
  ;
}