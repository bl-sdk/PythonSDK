#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSMNotify()
{
    py::class_< FSMNotify,  FSMBehavior   >("FSMNotify")
        .def_readwrite("Time", &FSMNotify::Time)
  ;
}