#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FValidNameRange(py::module &m)
{
    py::class_< FValidNameRange >(m, "FValidNameRange")
        .def_readwrite("Start", &FValidNameRange::Start)
        .def_readwrite("End", &FValidNameRange::End)
  ;
}