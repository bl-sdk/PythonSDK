#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSHVectorRGB(py::object m)
{
    py::class_< FSHVectorRGB >(m, "FSHVectorRGB")
        .def_readwrite("R", &FSHVectorRGB::R)
        .def_readwrite("G", &FSHVectorRGB::G)
        .def_readwrite("B", &FSHVectorRGB::B)
  ;
}