#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSubTrackGroup()
{
    class_< FSubTrackGroup >("FSubTrackGroup", no_init)
        .def_readwrite("GroupName", &FSubTrackGroup::GroupName)
        .def_readwrite("TrackIndices", &FSubTrackGroup::TrackIndices)
  ;
}