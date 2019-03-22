#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIAxisEmulationDefinition(py::module &m)
{
    py::class_< FUIAxisEmulationDefinition >(m, "FUIAxisEmulationDefinition")
        .def_readwrite("AxisInputKey", &FUIAxisEmulationDefinition::AxisInputKey)
        .def_readwrite("AdjacentAxisInputKey", &FUIAxisEmulationDefinition::AdjacentAxisInputKey)
  ;
}