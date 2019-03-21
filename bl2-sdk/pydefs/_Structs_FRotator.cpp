#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRotator(py::object m)
{
    py::class_< FRotator >(m, "FRotator")
        .def_readwrite("Pitch", &FRotator::Pitch)
        .def_readwrite("Yaw", &FRotator::Yaw)
        .def_readwrite("Roll", &FRotator::Roll)
  ;
}