#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimTag(py::object m)
{
    py::class_< FAnimTag >(m, "FAnimTag")
        .def_readwrite("Tag", &FAnimTag::Tag)
        .def_readwrite("Contains", &FAnimTag::Contains)
  ;
}