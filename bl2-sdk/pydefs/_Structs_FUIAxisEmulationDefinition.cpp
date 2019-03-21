#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIAxisEmulationDefinition()
{
    class_< FUIAxisEmulationDefinition >("FUIAxisEmulationDefinition", no_init)
        .def_readwrite("AxisInputKey", &FUIAxisEmulationDefinition::AxisInputKey)
        .def_readwrite("AdjacentAxisInputKey", &FUIAxisEmulationDefinition::AdjacentAxisInputKey)
        .def_readonly("InputKeyToEmulate", &FUIAxisEmulationDefinition::InputKeyToEmulate)
  ;
}