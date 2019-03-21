#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSupportedSubTrackInfo()
{
    class_< FSupportedSubTrackInfo >("FSupportedSubTrackInfo", no_init)
        .def_readwrite("SupportedClass", &FSupportedSubTrackInfo::SupportedClass)
        .def_readwrite("SubTrackName", &FSupportedSubTrackInfo::SubTrackName)
        .def_readwrite("GroupIndex", &FSupportedSubTrackInfo::GroupIndex)
  ;
}