#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTurnDefinition()
{
    class_< UTurnDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UTurnDefinition", no_init)
        .def_readwrite("Idle", &UTurnDefinition::Idle)
        .def_readwrite("Moving", &UTurnDefinition::Moving)
        .def_readwrite("TurnCancelTime", &UTurnDefinition::TurnCancelTime)
        .def("StaticClass", &UTurnDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("UsesMovingTurns", &UTurnDefinition::UsesMovingTurns)
        .def("UsesIdleTurns", &UTurnDefinition::UsesIdleTurns)
        .staticmethod("StaticClass")
  ;
}