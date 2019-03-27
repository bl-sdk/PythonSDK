#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQoSResults(py::module &m)
{
    py::class_< FQoSResults >(m, "FQoSResults")
        .def_readwrite("PingTimes", &FQoSResults::PingTimes)
        .def_readwrite("PingInMs", &FQoSResults::PingInMs)
  ;
}