#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlane(py::module &m)
{
    py::class_< FPlane,  FVector   >(m, "FPlane")
        .def_readwrite("W", &FPlane::W)
  ;
}