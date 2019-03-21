#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AScout()
{
    py::class_< AScout,  APawn   >("AScout")
        .def_readwrite("PathSizes", &AScout::PathSizes)
        .def_readwrite("TestJumpZ", &AScout::TestJumpZ)
        .def_readwrite("TestGroundSpeed", &AScout::TestGroundSpeed)
        .def_readwrite("TestMaxFallSpeed", &AScout::TestMaxFallSpeed)
        .def_readwrite("TestFallSpeed", &AScout::TestFallSpeed)
        .def_readwrite("MaxLandingVelocity", &AScout::MaxLandingVelocity)
        .def_readwrite("MinNumPlayerStarts", &AScout::MinNumPlayerStarts)
        .def_readwrite("DefaultReachSpecClass", &AScout::DefaultReachSpecClass)
        .def_readwrite("EdgePathColors", &AScout::EdgePathColors)
        .def_readwrite("NavMeshGen_StepSize", &AScout::NavMeshGen_StepSize)
        .def_readwrite("NavMeshGen_EntityHalfHeight", &AScout::NavMeshGen_EntityHalfHeight)
        .def_readwrite("NavMeshGen_StartingHeightOffset", &AScout::NavMeshGen_StartingHeightOffset)
        .def_readwrite("NavMeshGen_MaxDropHeight", &AScout::NavMeshGen_MaxDropHeight)
        .def_readwrite("NavMeshGen_MaxStepHeight", &AScout::NavMeshGen_MaxStepHeight)
        .def_readwrite("NavMeshGen_VertZDeltaSnapThresh", &AScout::NavMeshGen_VertZDeltaSnapThresh)
        .def_readwrite("NavMeshGen_MinPolyArea", &AScout::NavMeshGen_MinPolyArea)
        .def_readwrite("NavMeshGen_BorderBackfill_CheckDist", &AScout::NavMeshGen_BorderBackfill_CheckDist)
        .def_readwrite("NavMeshGen_MinMergeDotAreaThreshold", &AScout::NavMeshGen_MinMergeDotAreaThreshold)
        .def_readwrite("NavMeshGen_MinMergeDotSmallArea", &AScout::NavMeshGen_MinMergeDotSmallArea)
        .def_readwrite("NavMeshGen_MinMergeDotLargeArea", &AScout::NavMeshGen_MinMergeDotLargeArea)
        .def_readwrite("NavMeshGen_MaxPolyHeight", &AScout::NavMeshGen_MaxPolyHeight)
        .def_readwrite("NavMeshGen_HeightMergeThreshold", &AScout::NavMeshGen_HeightMergeThreshold)
        .def_readwrite("NavMeshGen_EdgeMaxDelta", &AScout::NavMeshGen_EdgeMaxDelta)
        .def_readwrite("NavMeshGen_MaxGroundCheckSize", &AScout::NavMeshGen_MaxGroundCheckSize)
        .def_readwrite("NavMeshGen_MinEdgeLength", &AScout::NavMeshGen_MinEdgeLength)
        .def_readwrite("NavMeshGen_MinConcaveMergeDot", &AScout::NavMeshGen_MinConcaveMergeDot)
        .def_readwrite("MinMantleFallDist", &AScout::MinMantleFallDist)
        .def_readwrite("MaxMantleFallDist", &AScout::MaxMantleFallDist)
        .def_readwrite("MinMantleLateralDist", &AScout::MinMantleLateralDist)
        .def_readwrite("MaxMantleLateralDist", &AScout::MaxMantleLateralDist)
        .def_readwrite("MaxMantleFallTime", &AScout::MaxMantleFallTime)
        .def("StaticClass", &AScout::StaticClass, py::return_value_policy::reference)
        .def("eventPreBeginPlay", &AScout::eventPreBeginPlay)
        .staticmethod("StaticClass")
  ;
}