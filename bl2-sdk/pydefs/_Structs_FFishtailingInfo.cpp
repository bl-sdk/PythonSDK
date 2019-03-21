#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFishtailingInfo()
{
    py::class_< FFishtailingInfo >("FFishtailingInfo")
        .def_readwrite("ContactPoint", &FFishtailingInfo::ContactPoint)
        .def_readwrite("Impulse", &FFishtailingInfo::Impulse)
  ;
}