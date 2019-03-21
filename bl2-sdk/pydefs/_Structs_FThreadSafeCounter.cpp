#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FThreadSafeCounter(py::object m)
{
    py::class_< FThreadSafeCounter >(m, "FThreadSafeCounter")
        .def_readwrite("Value", &FThreadSafeCounter::Value)
  ;
}