#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimeModifier(py::object m)
{
    py::class_< FTimeModifier >(m, "FTimeModifier")
        .def_readwrite("Time", &FTimeModifier::Time)
        .def_readwrite("TargetStrength", &FTimeModifier::TargetStrength)
  ;
}