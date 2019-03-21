#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMMStats_Timer()
{
    py::class_< FMMStats_Timer >("FMMStats_Timer")
        .def_readwrite("MSecs", &FMMStats_Timer::MSecs)
  ;
}