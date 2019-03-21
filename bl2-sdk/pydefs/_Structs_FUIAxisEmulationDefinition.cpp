#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIAxisEmulationDefinition()
{
    py::class_< FUIAxisEmulationDefinition >("FUIAxisEmulationDefinition")
        .def_readwrite("AxisInputKey", &FUIAxisEmulationDefinition::AxisInputKey)
        .def_readwrite("AdjacentAxisInputKey", &FUIAxisEmulationDefinition::AdjacentAxisInputKey)
        .def_readonly("InputKeyToEmulate", &FUIAxisEmulationDefinition::InputKeyToEmulate)
  ;
}