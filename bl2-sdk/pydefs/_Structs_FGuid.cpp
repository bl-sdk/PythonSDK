#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGuid(py::module &m)
{
    py::class_< FGuid >(m, "FGuid")
        .def_readwrite("A", &FGuid::A)
        .def_readwrite("B", &FGuid::B)
        .def_readwrite("C", &FGuid::C)
        .def_readwrite("D", &FGuid::D)
  ;
}