#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVariance()
{
    py::class_< FVariance >("FVariance")
        .def_readwrite("LowerBound", &FVariance::LowerBound)
        .def_readwrite("UpperBound", &FVariance::UpperBound)
  ;
}