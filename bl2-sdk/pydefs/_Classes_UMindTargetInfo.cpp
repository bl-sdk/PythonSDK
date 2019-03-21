#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMindTargetInfo()
{
    py::class_< UMindTargetInfo,  UObject   >("UMindTargetInfo")
        .def_readwrite("Target", &UMindTargetInfo::Target)
        .def_readwrite("Distance", &UMindTargetInfo::Distance)
        .def_readwrite("bCanFireAt", &UMindTargetInfo::bCanFireAt)
        .def_readwrite("Priority", &UMindTargetInfo::Priority)
        .def_readwrite("OnePriority", &UMindTargetInfo::OnePriority)
        .def_readwrite("TargetExposureToMe", &UMindTargetInfo::TargetExposureToMe)
        .def_readwrite("MyExposureToTarget", &UMindTargetInfo::MyExposureToTarget)
        .def_readwrite("HitTargetHistory", &UMindTargetInfo::HitTargetHistory)
        .def_readwrite("PriorityDebugRecords", &UMindTargetInfo::PriorityDebugRecords)
        .def_readwrite("IAmConsciousOfTarget", &UMindTargetInfo::IAmConsciousOfTarget)
        .def_readwrite("IAmConsciousTime", &UMindTargetInfo::IAmConsciousTime)
        .def_readwrite("TargetHasShotAtMeRecently", &UMindTargetInfo::TargetHasShotAtMeRecently)
        .def_readwrite("TargetOccludedBySmoke", &UMindTargetInfo::TargetOccludedBySmoke)
        .def_readwrite("IHaveSeenOrKnownThisTargetBefore", &UMindTargetInfo::IHaveSeenOrKnownThisTargetBefore)
        .def_readwrite("LastVisibleOrAudibleLocation", &UMindTargetInfo::LastVisibleOrAudibleLocation)
        .def_readwrite("BonusPriority", &UMindTargetInfo::BonusPriority)
        .def("StaticClass", &UMindTargetInfo::StaticClass, py::return_value_policy::reference)
        .def("GetAverageHitTime", &UMindTargetInfo::GetAverageHitTime)
        .def("AddHitTargetRecord", &UMindTargetInfo::AddHitTargetRecord)
        .staticmethod("StaticClass")
  ;
}