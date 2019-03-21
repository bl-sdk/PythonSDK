#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIRange(py::object m)
{
    py::class_< FAIRange >(m, "FAIRange")
        .def_readwrite("MinVal", &FAIRange::MinVal)
        .def_readwrite("MaxVal", &FAIRange::MaxVal)
  ;
}