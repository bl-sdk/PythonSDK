#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_WaypointObjective()
{
    py::class_< UWillowSeqAct_WaypointObjective,  USequenceAction   >("UWillowSeqAct_WaypointObjective")
        .def_readwrite("WaypointInfo", &UWillowSeqAct_WaypointObjective::WaypointInfo)
        .def_readwrite("WaypointObjective", &UWillowSeqAct_WaypointObjective::WaypointObjective)
        .def("StaticClass", &UWillowSeqAct_WaypointObjective::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}