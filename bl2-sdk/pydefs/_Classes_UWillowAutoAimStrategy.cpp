#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAutoAimStrategy()
{
    class_< UWillowAutoAimStrategy, bases< UObject >  , boost::noncopyable>("UWillowAutoAimStrategy", no_init)
        .def_readwrite("DataDefinition", &UWillowAutoAimStrategy::DataDefinition)
        .def_readwrite("CurrentFrame", &UWillowAutoAimStrategy::CurrentFrame)
        .def_readwrite("LastFrame", &UWillowAutoAimStrategy::LastFrame)
        .def_readwrite("SustainStartTime", &UWillowAutoAimStrategy::SustainStartTime)
        .def_readwrite("AcquireStartTime", &UWillowAutoAimStrategy::AcquireStartTime)
        .def_readwrite("InstantaneousTarget", &UWillowAutoAimStrategy::InstantaneousTarget)
        .def_readonly("UnknownData00", &UWillowAutoAimStrategy::UnknownData00)
        .def_readwrite("LastInstantaneousTarget", &UWillowAutoAimStrategy::LastInstantaneousTarget)
        .def_readonly("UnknownData01", &UWillowAutoAimStrategy::UnknownData01)
        .def_readwrite("LockedTarget", &UWillowAutoAimStrategy::LockedTarget)
        .def_readonly("UnknownData02", &UWillowAutoAimStrategy::UnknownData02)
        .def_readwrite("PrevProfile", &UWillowAutoAimStrategy::PrevProfile)
        .def_readwrite("CurrentProfile", &UWillowAutoAimStrategy::CurrentProfile)
        .def_readwrite("TargetSet", &UWillowAutoAimStrategy::TargetSet)
        .def("StaticClass", &UWillowAutoAimStrategy::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetTargetSet", &UWillowAutoAimStrategy::SetTargetSet)
        .def("SetAdjustOnMoveOnly", &UWillowAutoAimStrategy::SetAdjustOnMoveOnly)
        .def("SetLockingEnabled", &UWillowAutoAimStrategy::SetLockingEnabled)
        .def("GetLogMagnetismRange", &UWillowAutoAimStrategy::GetLogMagnetismRange)
        .def("eventDrawAutoAimDebug", &UWillowAutoAimStrategy::eventDrawAutoAimDebug)
        .def("GetPreferredTarget", &UWillowAutoAimStrategy::GetPreferredTarget, return_value_policy< reference_existing_object >())
        .def("ModifyInput", &UWillowAutoAimStrategy::ModifyInput)
        .staticmethod("StaticClass")
  ;
}