#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPursuitNodeData()
{
    class_< FPursuitNodeData >("FPursuitNodeData", no_init)
        .def_readwrite("RelativeLocation", &FPursuitNodeData::RelativeLocation)
        .def_readwrite("NodeType", &FPursuitNodeData::NodeType)
        .def_readwrite("EvasiveActionDistance", &FPursuitNodeData::EvasiveActionDistance)
        .def_readwrite("AIAlertDistance", &FPursuitNodeData::AIAlertDistance)
        .def_readwrite("AIAlertFlagDef", &FPursuitNodeData::AIAlertFlagDef)
  ;
}