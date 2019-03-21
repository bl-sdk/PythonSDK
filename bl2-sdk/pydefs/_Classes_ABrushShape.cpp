#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABrushShape(py::object m)
{
    py::class_< ABrushShape,  ABrush   >(m, "ABrushShape")
        .def("StaticClass", &ABrushShape::StaticClass, py::return_value_policy::reference)
          ;
}