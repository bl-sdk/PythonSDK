#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPendingFaceFXInfo()
{
    class_< FPendingFaceFXInfo >("FPendingFaceFXInfo", no_init)
        .def_readwrite("PendingFaceFXPlayingInfoPtr", &FPendingFaceFXInfo::PendingFaceFXPlayingInfoPtr)
        .def_readwrite("AnimName", &FPendingFaceFXInfo::AnimName)
        .def_readwrite("RawData", &FPendingFaceFXInfo::RawData)
  ;
}