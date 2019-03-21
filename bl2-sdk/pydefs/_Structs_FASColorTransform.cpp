#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FASColorTransform(py::object m)
{
    py::class_< FASColorTransform >(m, "FASColorTransform")
        .def_readwrite("Multiply", &FASColorTransform::Multiply)
        .def_readwrite("Add", &FASColorTransform::Add)
  ;
}