#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAutoAimStrategy(py::module &m)
{
    py::class_< UWillowAutoAimStrategy,  UObject   >(m, "UWillowAutoAimStrategy")
		.def_static("StaticClass", &UWillowAutoAimStrategy::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DataDefinition", &UWillowAutoAimStrategy::DataDefinition)
        .def_readwrite("CurrentFrame", &UWillowAutoAimStrategy::CurrentFrame)
        .def_readwrite("LastFrame", &UWillowAutoAimStrategy::LastFrame)
        .def_readwrite("SustainStartTime", &UWillowAutoAimStrategy::SustainStartTime)
        .def_readwrite("AcquireStartTime", &UWillowAutoAimStrategy::AcquireStartTime)
        .def_readwrite("InstantaneousTarget", &UWillowAutoAimStrategy::InstantaneousTarget)
        .def_readwrite("LastInstantaneousTarget", &UWillowAutoAimStrategy::LastInstantaneousTarget)
        .def_readwrite("LockedTarget", &UWillowAutoAimStrategy::LockedTarget)
        .def_readwrite("PrevProfile", &UWillowAutoAimStrategy::PrevProfile)
        .def_readwrite("CurrentProfile", &UWillowAutoAimStrategy::CurrentProfile)
        .def_readwrite("TargetSet", &UWillowAutoAimStrategy::TargetSet)
        .def("SetTargetSet", &UWillowAutoAimStrategy::SetTargetSet)
        .def("SetAdjustOnMoveOnly", &UWillowAutoAimStrategy::SetAdjustOnMoveOnly)
        .def("SetLockingEnabled", &UWillowAutoAimStrategy::SetLockingEnabled)
        .def("GetLogMagnetismRange", &UWillowAutoAimStrategy::GetLogMagnetismRange)
        .def("eventDrawAutoAimDebug", &UWillowAutoAimStrategy::eventDrawAutoAimDebug)
        .def("GetPreferredTarget", &UWillowAutoAimStrategy::GetPreferredTarget, py::return_value_policy::reference)
        .def("ModifyInput", &UWillowAutoAimStrategy::ModifyInput)
          ;
}