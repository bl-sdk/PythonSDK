#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPawnRelevanceUtilityCaching()
{
    class_< UPawnRelevanceUtilityCaching, bases< UPawnRelevanceUtility >  , boost::noncopyable>("UPawnRelevanceUtilityCaching", no_init)
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
        .def("StaticClass", &UPawnRelevanceUtilityCaching::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}