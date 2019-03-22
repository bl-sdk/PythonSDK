#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSMNotify(py::module &m)
{
    py::class_< FSMNotify,  FSMBehavior   >(m, "FSMNotify")
        .def_readwrite("Time", &FSMNotify::Time)
  ;
}