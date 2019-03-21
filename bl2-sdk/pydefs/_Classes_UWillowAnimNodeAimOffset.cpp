#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeAimOffset(py::object m)
{
    py::class_< UWillowAnimNodeAimOffset,  UAnimNodeAimOffset   >(m, "UWillowAnimNodeAimOffset")
        .def_readwrite("AimSpeed", &UWillowAnimNodeAimOffset::AimSpeed)
        .def_readwrite("PivotOverrideSocket", &UWillowAnimNodeAimOffset::PivotOverrideSocket)
        .def_readwrite("YawRange", &UWillowAnimNodeAimOffset::YawRange)
        .def_readwrite("PitchRangeUp", &UWillowAnimNodeAimOffset::PitchRangeUp)
        .def_readwrite("PitchRangeDown", &UWillowAnimNodeAimOffset::PitchRangeDown)
        .def_readwrite("YawLimitPct", &UWillowAnimNodeAimOffset::YawLimitPct)
        .def_readwrite("PitchLimitPct", &UWillowAnimNodeAimOffset::PitchLimitPct)
        .def_readwrite("AngleRange", &UWillowAnimNodeAimOffset::AngleRange)
        .def("StaticClass", &UWillowAnimNodeAimOffset::StaticClass, py::return_value_policy::reference)
        .def("GetTargetLocation", &UWillowAnimNodeAimOffset::GetTargetLocation)
        .def("GetPivotPoint", &UWillowAnimNodeAimOffset::GetPivotPoint)
        .def("InterpAim", &UWillowAnimNodeAimOffset::InterpAim)
        .def("GetDesiredAim", &UWillowAnimNodeAimOffset::GetDesiredAim)
        .def("GetCurrentAim", &UWillowAnimNodeAimOffset::GetCurrentAim)
        .def("DebugAimOffset", &UWillowAnimNodeAimOffset::DebugAimOffset)
        .def("IsAimNodeDebugEnabled", &UWillowAnimNodeAimOffset::IsAimNodeDebugEnabled)
        .def("ToggleAimNodeDebug", &UWillowAnimNodeAimOffset::ToggleAimNodeDebug)
          ;
}