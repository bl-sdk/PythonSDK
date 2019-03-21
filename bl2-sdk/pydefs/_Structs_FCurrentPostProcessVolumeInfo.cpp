#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCurrentPostProcessVolumeInfo()
{
    class_< FCurrentPostProcessVolumeInfo >("FCurrentPostProcessVolumeInfo", no_init)
        .def_readwrite("LastSettings", &FCurrentPostProcessVolumeInfo::LastSettings)
        .def_readwrite("LastVolumeUsed", &FCurrentPostProcessVolumeInfo::LastVolumeUsed)
        .def_readwrite("BlendStartTime", &FCurrentPostProcessVolumeInfo::BlendStartTime)
        .def_readwrite("LastBlendTime", &FCurrentPostProcessVolumeInfo::LastBlendTime)
  ;
}