#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimSetMeshLinkup(py::object m)
{
    py::class_< FAnimSetMeshLinkup >(m, "FAnimSetMeshLinkup")
        .def_readwrite("BoneToTrackTable", &FAnimSetMeshLinkup::BoneToTrackTable)
  ;
}