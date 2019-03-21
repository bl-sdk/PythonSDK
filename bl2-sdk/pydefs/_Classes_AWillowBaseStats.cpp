#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowBaseStats()
{
    class_< AWillowBaseStats, bases< AInfo >  , boost::noncopyable>("AWillowBaseStats", no_init)
        .def_readwrite("VfTable_ISparkUpdateCallback", &AWillowBaseStats::VfTable_ISparkUpdateCallback)
        .def_readwrite("SaveVersion", &AWillowBaseStats::SaveVersion)
        .def_readwrite("ReadVersion", &AWillowBaseStats::ReadVersion)
        .def_readwrite("StatProperties", &AWillowBaseStats::StatProperties)
        .def_readonly("UnknownData00", &AWillowBaseStats::UnknownData00)
        .def_readwrite("ReplicationChannel", &AWillowBaseStats::ReplicationChannel)
        .def_readwrite("DebugDisplayFilter", &AWillowBaseStats::DebugDisplayFilter)
        .def_readwrite("CurrentDebugPage", &AWillowBaseStats::CurrentDebugPage)
        .def("StaticClass", &AWillowBaseStats::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClearSparkCallbacks", &AWillowBaseStats::ClearSparkCallbacks)
        .def("DirtyAllStats", &AWillowBaseStats::DirtyAllStats)
        .def("ReportDirtyStats", &AWillowBaseStats::ReportDirtyStats)
        .def("AllDirtyStats", &AWillowBaseStats::AllDirtyStats)
        .def("UpdateChallengeBaseValues", &AWillowBaseStats::UpdateChallengeBaseValues)
        .def("TryAndSpawnReplicationChannel", &AWillowBaseStats::TryAndSpawnReplicationChannel)
        .def("StatPropertyToStringFromName", &AWillowBaseStats::StatPropertyToStringFromName)
        .def("StatPropertyToString", &AWillowBaseStats::StatPropertyToString)
        .def("SetFloatStat", &AWillowBaseStats::SetFloatStat)
        .def("SetIntStat", &AWillowBaseStats::SetIntStat)
        .def("GetFloatStat", &AWillowBaseStats::GetFloatStat)
        .def("GetIntStat", &AWillowBaseStats::GetIntStat)
        .def("IncrementFloatStat", &AWillowBaseStats::IncrementFloatStat)
        .def("IncrementIntStat", &AWillowBaseStats::IncrementIntStat)
        .def("PreviousDebugPage", &AWillowBaseStats::PreviousDebugPage)
        .def("NextDebugPage", &AWillowBaseStats::NextDebugPage)
        .staticmethod("StaticClass")
  ;
}