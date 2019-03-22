#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABrushShape(py::module &m)
{
    py::class_< ABrushShape,  ABrush   >(m, "ABrushShape")
          ;
}