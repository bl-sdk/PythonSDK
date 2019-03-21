#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNavMeshPathParams()
{
    class_< FNavMeshPathParams >("FNavMeshPathParams", no_init)
        .def_readwrite("Interface", &FNavMeshPathParams::Interface)
        .def_readwrite("PhysicsJumpCostMultiplier", &FNavMeshPathParams::PhysicsJumpCostMultiplier)
        .def_readwrite("SearchExtent", &FNavMeshPathParams::SearchExtent)
        .def_readwrite("SearchLaneMultiplier", &FNavMeshPathParams::SearchLaneMultiplier)
        .def_readwrite("SearchStart", &FNavMeshPathParams::SearchStart)
        .def_readwrite("MaxDropHeight", &FNavMeshPathParams::MaxDropHeight)
        .def_readwrite("MinWalkableZ", &FNavMeshPathParams::MinWalkableZ)
        .def_readwrite("MaxHoverDistance", &FNavMeshPathParams::MaxHoverDistance)
        .def_readwrite("ObstaclesToIgnore", &FNavMeshPathParams::ObstaclesToIgnore)
        .def_readwrite("LookAheadDistance", &FNavMeshPathParams::LookAheadDistance)
        .def_readwrite("CornerCutDistance", &FNavMeshPathParams::CornerCutDistance)
        .def_readwrite("LookInterpRate", &FNavMeshPathParams::LookInterpRate)
  ;
}