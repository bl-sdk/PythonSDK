#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurrentPostProcessVolumeInfo(py::module &m)
{
    py::class_< FCurrentPostProcessVolumeInfo >(m, "FCurrentPostProcessVolumeInfo")
        .def_readwrite("LastSettings", &FCurrentPostProcessVolumeInfo::LastSettings)
        .def_readwrite("LastVolumeUsed", &FCurrentPostProcessVolumeInfo::LastVolumeUsed)
        .def_readwrite("BlendStartTime", &FCurrentPostProcessVolumeInfo::BlendStartTime)
        .def_readwrite("LastBlendTime", &FCurrentPostProcessVolumeInfo::LastBlendTime)
  ;
}