#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExposureUtilityFixedCost()
{
    py::class_< UExposureUtilityFixedCost,  UExposureUtilityBase   >("UExposureUtilityFixedCost")
        .def_readwrite("CloseDistanceSquared", &UExposureUtilityFixedCost::CloseDistanceSquared)
        .def_readwrite("MedDistanceSquared", &UExposureUtilityFixedCost::MedDistanceSquared)
        .def_readwrite("MaxLineChecksPerFrame", &UExposureUtilityFixedCost::MaxLineChecksPerFrame)
        .def_readwrite("Buckets", &UExposureUtilityFixedCost::Buckets)
        .def_readwrite("MedAccumulatedTime", &UExposureUtilityFixedCost::MedAccumulatedTime)
        .def_readwrite("FarAccumulatedTime", &UExposureUtilityFixedCost::FarAccumulatedTime)
        .def_readwrite("SkipUpdateForTime", &UExposureUtilityFixedCost::SkipUpdateForTime)
        .def_readwrite("MaxPointData", &UExposureUtilityFixedCost::MaxPointData)
        .def_readwrite("PointLineChecks", &UExposureUtilityFixedCost::PointLineChecks)
        .def_readwrite("PointMaxLineChecks", &UExposureUtilityFixedCost::PointMaxLineChecks)
        .def_readwrite("PointFreshTime", &UExposureUtilityFixedCost::PointFreshTime)
        .def_readwrite("PointStaleTime", &UExposureUtilityFixedCost::PointStaleTime)
        .def_readwrite("PointMaxErrorSq", &UExposureUtilityFixedCost::PointMaxErrorSq)
        .def_readwrite("PointData", &UExposureUtilityFixedCost::PointData)
        .def_readwrite("MaxCacheTime", &UExposureUtilityBasicCaching::MaxCacheTime)
        .def_readwrite("DistanceClose", &UExposureUtilityBasicCaching::DistanceClose)
        .def_readwrite("DistanceMed", &UExposureUtilityBasicCaching::DistanceMed)
        .def_readwrite("CacheFreshnessTimeClose", &UExposureUtilityBasicCaching::CacheFreshnessTimeClose)
        .def_readwrite("CacheFreshnessTimeMed", &UExposureUtilityBasicCaching::CacheFreshnessTimeMed)
        .def_readwrite("CacheFreshnessTimeFar", &UExposureUtilityBasicCaching::CacheFreshnessTimeFar)
        .def_readwrite("CacheFreshnessTimePlayer", &UExposureUtilityBasicCaching::CacheFreshnessTimePlayer)
        .def_readwrite("CacheTimeFudgeFactorClose", &UExposureUtilityBasicCaching::CacheTimeFudgeFactorClose)
        .def_readwrite("CacheTimeFudgeFactorMed", &UExposureUtilityBasicCaching::CacheTimeFudgeFactorMed)
        .def_readwrite("CacheTimeFudgeFactorFar", &UExposureUtilityBasicCaching::CacheTimeFudgeFactorFar)
        .def_readwrite("HasMovedDistThreshold", &UExposureUtilityBasicCaching::HasMovedDistThreshold)
        .def_readwrite("HasMovedDistThresholdPlayer", &UExposureUtilityBasicCaching::HasMovedDistThresholdPlayer)
        .def_readwrite("CachedExposures", &UExposureUtilityBasicCaching::CachedExposures)
        .def("StaticClass", &UExposureUtilityFixedCost::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}