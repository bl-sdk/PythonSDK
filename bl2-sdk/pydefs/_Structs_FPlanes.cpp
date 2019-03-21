#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlane()
{
    py::class_< FPlane,  FVector   >("FPlane")
        .def_readwrite("W", &FPlane::W)
  ;
}