#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANavMeshObstacle()
{
    class_< ANavMeshObstacle, bases< AActor >  , boost::noncopyable>("ANavMeshObstacle", no_init)
        .def_readwrite("VfTable_IInterface_NavMeshPathObstacle", &ANavMeshObstacle::VfTable_IInterface_NavMeshPathObstacle)
        .def("StaticClass", &ANavMeshObstacle::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyCheckpointRecord", &ANavMeshObstacle::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ANavMeshObstacle::CreateCheckpointRecord)
        .def("SetEnabled", &ANavMeshObstacle::SetEnabled)
        .def("OnToggle", &ANavMeshObstacle::OnToggle)
        .def("PostBeginPlay", &ANavMeshObstacle::PostBeginPlay)
        .def("UnRegisterObstacle", &ANavMeshObstacle::UnRegisterObstacle)
        .def("RegisterObstacle", &ANavMeshObstacle::RegisterObstacle)
        .def("eventGetObstacleBoudingShape", &ANavMeshObstacle::eventGetObstacleBoudingShape)
        .staticmethod("StaticClass")
  ;
}