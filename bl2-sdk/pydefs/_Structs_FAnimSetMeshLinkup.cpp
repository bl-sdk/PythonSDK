#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimSetMeshLinkup()
{
    class_< FAnimSetMeshLinkup >("FAnimSetMeshLinkup", no_init)
        .def_readwrite("BoneToTrackTable", &FAnimSetMeshLinkup::BoneToTrackTable)
  ;
}