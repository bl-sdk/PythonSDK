#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimePosition(py::object m)
{
    py::class_< FTimePosition >(m, "FTimePosition")
        .def_readwrite("Position", &FTimePosition::Position)
        .def_readwrite("Time", &FTimePosition::Time)
  ;
}