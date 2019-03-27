#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMatrix(py::module &m)
{
    py::class_< FMatrix >(m, "FMatrix")
        .def_readwrite("XPlane", &FMatrix::XPlane)
        .def_readwrite("YPlane", &FMatrix::YPlane)
        .def_readwrite("ZPlane", &FMatrix::ZPlane)
        .def_readwrite("WPlane", &FMatrix::WPlane)
  ;
}