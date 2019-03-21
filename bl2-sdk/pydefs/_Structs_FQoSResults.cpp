#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQoSResults()
{
    py::class_< FQoSResults >("FQoSResults")
        .def_readwrite("PingTimes", &FQoSResults::PingTimes)
        .def_readwrite("PingInMs", &FQoSResults::PingInMs)
  ;
}