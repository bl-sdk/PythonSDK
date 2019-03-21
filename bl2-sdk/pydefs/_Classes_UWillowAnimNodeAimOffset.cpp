#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeAimOffset()
{
    class_< UWillowAnimNodeAimOffset, bases< UAnimNodeAimOffset >  , boost::noncopyable>("UWillowAnimNodeAimOffset", no_init)
        .def_readwrite("AimSpeed", &UWillowAnimNodeAimOffset::AimSpeed)
        .def_readwrite("PivotOverrideSocket", &UWillowAnimNodeAimOffset::PivotOverrideSocket)
        .def_readwrite("YawRange", &UWillowAnimNodeAimOffset::YawRange)
        .def_readwrite("PitchRangeUp", &UWillowAnimNodeAimOffset::PitchRangeUp)
        .def_readwrite("PitchRangeDown", &UWillowAnimNodeAimOffset::PitchRangeDown)
        .def_readwrite("YawLimitPct", &UWillowAnimNodeAimOffset::YawLimitPct)
        .def_readwrite("PitchLimitPct", &UWillowAnimNodeAimOffset::PitchLimitPct)
        .def_readwrite("AngleRange", &UWillowAnimNodeAimOffset::AngleRange)
        .def("StaticClass", &UWillowAnimNodeAimOffset::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetTargetLocation", &UWillowAnimNodeAimOffset::GetTargetLocation)
        .def("GetPivotPoint", &UWillowAnimNodeAimOffset::GetPivotPoint)
        .def("InterpAim", &UWillowAnimNodeAimOffset::InterpAim)
        .def("GetDesiredAim", &UWillowAnimNodeAimOffset::GetDesiredAim)
        .def("GetCurrentAim", &UWillowAnimNodeAimOffset::GetCurrentAim)
        .def("DebugAimOffset", &UWillowAnimNodeAimOffset::DebugAimOffset)
        .def("IsAimNodeDebugEnabled", &UWillowAnimNodeAimOffset::IsAimNodeDebugEnabled)
        .def("ToggleAimNodeDebug", &UWillowAnimNodeAimOffset::ToggleAimNodeDebug)
        .staticmethod("StaticClass")
  ;
}