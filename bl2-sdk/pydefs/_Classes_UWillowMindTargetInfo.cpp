#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowMindTargetInfo(py::object m)
{
    py::class_< UWillowMindTargetInfo,  UMindTargetInfo   >(m, "UWillowMindTargetInfo")
        .def_readwrite("Targetable", &UWillowMindTargetInfo::Targetable)
        .def_readwrite("Distance2D", &UWillowMindTargetInfo::Distance2D)
        .def_readwrite("DotToTarget", &UWillowMindTargetInfo::DotToTarget)
        .def_readwrite("DotFromTarget", &UWillowMindTargetInfo::DotFromTarget)
        .def_readwrite("DistanceVertical", &UWillowMindTargetInfo::DistanceVertical)
        .def_readwrite("WeaponDotToTarget", &UWillowMindTargetInfo::WeaponDotToTarget)
        .def_readwrite("LeftDotToTarget", &UWillowMindTargetInfo::LeftDotToTarget)
        .def_readwrite("DotTargetFacing", &UWillowMindTargetInfo::DotTargetFacing)
        .def_readwrite("ThreatLevel", &UWillowMindTargetInfo::ThreatLevel)
        .def_readwrite("Exposure", &UWillowMindTargetInfo::Exposure)
        .def_readwrite("CoverExposure", &UWillowMindTargetInfo::CoverExposure)
        .def_readwrite("ForgetTime", &UWillowMindTargetInfo::ForgetTime)
        .def_readwrite("AggroTime", &UWillowMindTargetInfo::AggroTime)
        .def_readwrite("ExposureChangeTime", &UWillowMindTargetInfo::ExposureChangeTime)
        .def_readwrite("LastKnownLocation", &UWillowMindTargetInfo::LastKnownLocation)
        .def_readwrite("LastAttackTime", &UWillowMindTargetInfo::LastAttackTime)
        .def_readwrite("TotalDamagePct", &UWillowMindTargetInfo::TotalDamagePct)
        .def_readwrite("MovingAI", &UWillowMindTargetInfo::MovingAI)
        .def("StaticClass", &UWillowMindTargetInfo::StaticClass, py::return_value_policy::reference)
        .def("GetTargetLocation", &UWillowMindTargetInfo::GetTargetLocation)
          ;
}