#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurrentPostProcessVolumeInfo()
{
    py::class_< FCurrentPostProcessVolumeInfo >("FCurrentPostProcessVolumeInfo")
        .def_readwrite("LastSettings", &FCurrentPostProcessVolumeInfo::LastSettings)
        .def_readwrite("LastVolumeUsed", &FCurrentPostProcessVolumeInfo::LastVolumeUsed)
        .def_readwrite("BlendStartTime", &FCurrentPostProcessVolumeInfo::BlendStartTime)
        .def_readwrite("LastBlendTime", &FCurrentPostProcessVolumeInfo::LastBlendTime)
  ;
}