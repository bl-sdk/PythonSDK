#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimSetMeshLinkup()
{
    py::class_< FAnimSetMeshLinkup >("FAnimSetMeshLinkup")
        .def_readwrite("BoneToTrackTable", &FAnimSetMeshLinkup::BoneToTrackTable)
  ;
}