#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQoSResults(py::object m)
{
    py::class_< FQoSResults >(m, "FQoSResults")
        .def_readwrite("PingTimes", &FQoSResults::PingTimes)
        .def_readwrite("PingInMs", &FQoSResults::PingInMs)
  ;
}