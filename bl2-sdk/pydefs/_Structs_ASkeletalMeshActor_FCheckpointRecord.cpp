#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActor_FCheckpointRecord()
{
    py::class_< ASkeletalMeshActor_FCheckpointRecord >("ASkeletalMeshActor_FCheckpointRecord")
        .def_readwrite("Location", &ASkeletalMeshActor_FCheckpointRecord::Location)
        .def_readwrite("Rotation", &ASkeletalMeshActor_FCheckpointRecord::Rotation)
  ;
}