#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAkPlayingInfo()
{
    class_< FAkPlayingInfo >("FAkPlayingInfo", no_init)
        .def_readwrite("SourceComponent", &FAkPlayingInfo::SourceComponent)
        .def_readwrite("AkPlayingId", &FAkPlayingInfo::AkPlayingId)
  ;
}