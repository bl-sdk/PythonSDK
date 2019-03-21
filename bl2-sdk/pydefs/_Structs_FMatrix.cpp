#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMatrix()
{
    py::class_< FMatrix >("FMatrix")
        .def_readwrite("XPlane", &FMatrix::XPlane)
        .def_readwrite("YPlane", &FMatrix::YPlane)
        .def_readwrite("ZPlane", &FMatrix::ZPlane)
        .def_readwrite("WPlane", &FMatrix::WPlane)
  ;
}