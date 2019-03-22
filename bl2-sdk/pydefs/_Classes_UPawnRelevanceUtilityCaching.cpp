#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPawnRelevanceUtilityCaching(py::module &m)
{
    py::class_< UPawnRelevanceUtilityCaching,  UPawnRelevanceUtility   >(m, "UPawnRelevanceUtilityCaching")
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
          ;
}