#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FThreadSafeCounter()
{
    py::class_< FThreadSafeCounter >("FThreadSafeCounter")
        .def_readwrite("Value", &FThreadSafeCounter::Value)
  ;
}