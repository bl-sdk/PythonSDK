#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExposureUtilityBasicCaching(py::module &m)
{
    py::class_< UExposureUtilityBasicCaching,  UExposureUtilityBase   >(m, "UExposureUtilityBasicCaching")
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
        .def("StaticClass", &UExposureUtilityBasicCaching::StaticClass, py::return_value_policy::reference)
          ;
}