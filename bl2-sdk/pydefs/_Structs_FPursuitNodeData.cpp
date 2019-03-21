#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPursuitNodeData(py::object m)
{
    py::class_< FPursuitNodeData >(m, "FPursuitNodeData")
        .def_readwrite("RelativeLocation", &FPursuitNodeData::RelativeLocation)
        .def_readwrite("NodeType", &FPursuitNodeData::NodeType)
        .def_readwrite("EvasiveActionDistance", &FPursuitNodeData::EvasiveActionDistance)
        .def_readwrite("AIAlertDistance", &FPursuitNodeData::AIAlertDistance)
        .def_readwrite("AIAlertFlagDef", &FPursuitNodeData::AIAlertFlagDef)
  ;
}