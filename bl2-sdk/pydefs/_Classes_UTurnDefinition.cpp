#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTurnDefinition()
{
    py::class_< UTurnDefinition,  UGBXDefinition   >("UTurnDefinition")
        .def_readwrite("Idle", &UTurnDefinition::Idle)
        .def_readwrite("Moving", &UTurnDefinition::Moving)
        .def_readwrite("TurnCancelTime", &UTurnDefinition::TurnCancelTime)
        .def("StaticClass", &UTurnDefinition::StaticClass, py::return_value_policy::reference)
        .def("UsesMovingTurns", &UTurnDefinition::UsesMovingTurns)
        .def("UsesIdleTurns", &UTurnDefinition::UsesIdleTurns)
        .staticmethod("StaticClass")
  ;
}