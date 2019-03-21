#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCullDistanceSizePair(py::object m)
{
    py::class_< FCullDistanceSizePair >(m, "FCullDistanceSizePair")
        .def_readwrite("Size", &FCullDistanceSizePair::Size)
        .def_readwrite("CullDistance", &FCullDistanceSizePair::CullDistance)
  ;
}