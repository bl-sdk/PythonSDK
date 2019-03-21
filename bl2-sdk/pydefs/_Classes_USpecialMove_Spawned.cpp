#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Spawned(py::object m)
{
    py::class_< USpecialMove_Spawned,  UWillowAnimDefinition   >(m, "USpecialMove_Spawned")
        .def_readwrite("StretchyStartTime", &USpecialMove_Spawned::StretchyStartTime)
        .def_readwrite("StretchyEndTime", &USpecialMove_Spawned::StretchyEndTime)
        .def("StaticClass", &USpecialMove_Spawned::StaticClass, py::return_value_policy::reference)
        .def("eventClientFinished", &USpecialMove_Spawned::eventClientFinished)
        .def("eventClientStarted", &USpecialMove_Spawned::eventClientStarted)
        .def("eventServerFinished", &USpecialMove_Spawned::eventServerFinished)
        .def("eventServerStarted", &USpecialMove_Spawned::eventServerStarted)
          ;
}