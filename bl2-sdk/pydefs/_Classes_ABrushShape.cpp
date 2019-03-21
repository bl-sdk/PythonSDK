#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABrushShape()
{
    py::class_< ABrushShape,  ABrush   >("ABrushShape")
        .def("StaticClass", &ABrushShape::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}