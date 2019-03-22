#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTurnDefinition(py::module &m)
{
    py::class_< UTurnDefinition,  UGBXDefinition   >(m, "UTurnDefinition")
        .def_readwrite("Idle", &UTurnDefinition::Idle)
        .def_readwrite("Moving", &UTurnDefinition::Moving)
        .def_readwrite("TurnCancelTime", &UTurnDefinition::TurnCancelTime)
        .def("UsesMovingTurns", &UTurnDefinition::UsesMovingTurns)
        .def("UsesIdleTurns", &UTurnDefinition::UsesIdleTurns)
          ;
}