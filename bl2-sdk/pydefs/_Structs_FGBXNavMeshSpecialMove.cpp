#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshSpecialMove(py::object m)
{
    py::class_< FGBXNavMeshSpecialMove >(m, "FGBXNavMeshSpecialMove")
        .def_readwrite("DestinationPolyIdx", &FGBXNavMeshSpecialMove::DestinationPolyIdx)
        .def_readwrite("DestinationMeshIdx", &FGBXNavMeshSpecialMove::DestinationMeshIdx)
        .def_readwrite("CrossLevelMoverIdx", &FGBXNavMeshSpecialMove::CrossLevelMoverIdx)
        .def_readwrite("ActorSpecialMoveId", &FGBXNavMeshSpecialMove::ActorSpecialMoveId)
        .def_readwrite("Mover", &FGBXNavMeshSpecialMove::Mover)
        .def_readwrite("LocalSpaceSrcLocation", &FGBXNavMeshSpecialMove::LocalSpaceSrcLocation)
        .def_readwrite("LocalSpaceDestLocation", &FGBXNavMeshSpecialMove::LocalSpaceDestLocation)
  ;
}