#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshSpecialMove()
{
    class_< FGBXNavMeshSpecialMove >("FGBXNavMeshSpecialMove", no_init)
        .def_readwrite("DestinationPolyIdx", &FGBXNavMeshSpecialMove::DestinationPolyIdx)
        .def_readwrite("DestinationMeshIdx", &FGBXNavMeshSpecialMove::DestinationMeshIdx)
        .def_readwrite("CrossLevelMoverIdx", &FGBXNavMeshSpecialMove::CrossLevelMoverIdx)
        .def_readwrite("ActorSpecialMoveId", &FGBXNavMeshSpecialMove::ActorSpecialMoveId)
        .def_readwrite("Mover", &FGBXNavMeshSpecialMove::Mover)
        .def_readonly("UnknownData00", &FGBXNavMeshSpecialMove::UnknownData00)
        .def_readwrite("LocalSpaceSrcLocation", &FGBXNavMeshSpecialMove::LocalSpaceSrcLocation)
        .def_readwrite("LocalSpaceDestLocation", &FGBXNavMeshSpecialMove::LocalSpaceDestLocation)
  ;
}