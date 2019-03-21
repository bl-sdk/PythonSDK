#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPawnRelevanceUtilityFixedCost(py::object m)
{
    py::class_< UPawnRelevanceUtilityFixedCost,  UPawnRelevanceUtility   >(m, "UPawnRelevanceUtilityFixedCost")
        .def_readwrite("CloseDistanceSquared", &UPawnRelevanceUtilityFixedCost::CloseDistanceSquared)
        .def_readwrite("MedDistanceSquared", &UPawnRelevanceUtilityFixedCost::MedDistanceSquared)
        .def_readwrite("MaxLineChecksPerFrame", &UPawnRelevanceUtilityFixedCost::MaxLineChecksPerFrame)
        .def_readwrite("Buckets", &UPawnRelevanceUtilityFixedCost::Buckets)
        .def_readwrite("MedAccumulatedTime", &UPawnRelevanceUtilityFixedCost::MedAccumulatedTime)
        .def_readwrite("FarAccumulatedTime", &UPawnRelevanceUtilityFixedCost::FarAccumulatedTime)
        .def_readwrite("SkipUpdateForTime", &UPawnRelevanceUtilityFixedCost::SkipUpdateForTime)
        .def_readwrite("MaxCacheTime", &UPawnRelevanceUtilityCaching::MaxCacheTime)
        .def_readwrite("DistanceClose", &UPawnRelevanceUtilityCaching::DistanceClose)
        .def_readwrite("DistanceMed", &UPawnRelevanceUtilityCaching::DistanceMed)
        .def_readwrite("CacheFreshnessTimeClose", &UPawnRelevanceUtilityCaching::CacheFreshnessTimeClose)
        .def_readwrite("CacheFreshnessTimeMed", &UPawnRelevanceUtilityCaching::CacheFreshnessTimeMed)
        .def_readwrite("CacheFreshnessTimeFar", &UPawnRelevanceUtilityCaching::CacheFreshnessTimeFar)
        .def_readwrite("CacheFreshnessTimePlayer", &UPawnRelevanceUtilityCaching::CacheFreshnessTimePlayer)
        .def_readwrite("CacheTimeFudgeFactorClose", &UPawnRelevanceUtilityCaching::CacheTimeFudgeFactorClose)
        .def_readwrite("CacheTimeFudgeFactorMed", &UPawnRelevanceUtilityCaching::CacheTimeFudgeFactorMed)
        .def_readwrite("CacheTimeFudgeFactorFar", &UPawnRelevanceUtilityCaching::CacheTimeFudgeFactorFar)
        .def_readwrite("HasMovedDistThreshold", &UPawnRelevanceUtilityCaching::HasMovedDistThreshold)
        .def_readwrite("HasMovedDistThresholdRelevant", &UPawnRelevanceUtilityCaching::HasMovedDistThresholdRelevant)
        .def_readwrite("CachedRelevance", &UPawnRelevanceUtilityCaching::CachedRelevance)
        .def("StaticClass", &UPawnRelevanceUtilityFixedCost::StaticClass, py::return_value_policy::reference)
        .def("SetMaxLineChecks", &UPawnRelevanceUtilityFixedCost::SetMaxLineChecks)
        .def("SetBucket", &UPawnRelevanceUtilityFixedCost::SetBucket)
        .def("ShowBucketSettings", &UPawnRelevanceUtilityFixedCost::ShowBucketSettings)
        .def("PrintBuckets", &UPawnRelevanceUtilityFixedCost::PrintBuckets)
          ;
}