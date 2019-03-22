#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFishtailingInfo(py::module &m)
{
    py::class_< FFishtailingInfo >(m, "FFishtailingInfo")
        .def_readwrite("ContactPoint", &FFishtailingInfo::ContactPoint)
        .def_readwrite("Impulse", &FFishtailingInfo::Impulse)
  ;
}