#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PawnLeap()
{
    class_< UBehavior_PawnLeap, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PawnLeap", no_init)
        .def_readwrite("LeapSpeed", &UBehavior_PawnLeap::LeapSpeed)
        .def_readwrite("LeapAngle", &UBehavior_PawnLeap::LeapAngle)
        .def_readwrite("OffsetLocation", &UBehavior_PawnLeap::OffsetLocation)
        .def_readwrite("TraceCheckRandomYaw", &UBehavior_PawnLeap::TraceCheckRandomYaw)
        .def_readwrite("TraceCheckPitch", &UBehavior_PawnLeap::TraceCheckPitch)
        .def_readwrite("TraceCheckMaxDistance", &UBehavior_PawnLeap::TraceCheckMaxDistance)
        .def_readwrite("TraceStartOffset", &UBehavior_PawnLeap::TraceStartOffset)
        .def_readwrite("TargetObject", &UBehavior_PawnLeap::TargetObject)
        .def_readwrite("RandomYawOnTarget", &UBehavior_PawnLeap::RandomYawOnTarget)
        .def_readwrite("LeapAnimDef", &UBehavior_PawnLeap::LeapAnimDef)
        .def("StaticClass", &UBehavior_PawnLeap::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindLandingLocation", &UBehavior_PawnLeap::FindLandingLocation)
        .def("ApplyBehaviorToContext", &UBehavior_PawnLeap::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}