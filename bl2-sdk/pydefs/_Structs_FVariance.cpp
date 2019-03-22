#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVariance(py::module &m)
{
    py::class_< FVariance >(m, "FVariance")
        .def_readwrite("LowerBound", &FVariance::LowerBound)
        .def_readwrite("UpperBound", &FVariance::UpperBound)
  ;
}