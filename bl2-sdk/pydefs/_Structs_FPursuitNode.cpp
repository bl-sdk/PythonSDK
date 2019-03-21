#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPursuitNode()
{
    py::class_< FPursuitNode >("FPursuitNode")
        .def_readwrite("RelativeLocation", &FPursuitNode::RelativeLocation)
        .def_readwrite("RelativeDistance", &FPursuitNode::RelativeDistance)
        .def_readwrite("EvasiveActionDistance", &FPursuitNode::EvasiveActionDistance)
        .def_readwrite("NodeType", &FPursuitNode::NodeType)
        .def_readwrite("LastReservedTime", &FPursuitNode::LastReservedTime)
        .def_readwrite("ReservedBy", &FPursuitNode::ReservedBy)
        .def_readwrite("AIAlertDistance", &FPursuitNode::AIAlertDistance)
        .def_readwrite("AIAlertFlagDef", &FPursuitNode::AIAlertFlagDef)
  ;
}