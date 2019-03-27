#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimSetMeshLinkup(py::module &m)
{
    py::class_< FAnimSetMeshLinkup >(m, "FAnimSetMeshLinkup")
        .def_readwrite("BoneToTrackTable", &FAnimSetMeshLinkup::BoneToTrackTable)
  ;
}