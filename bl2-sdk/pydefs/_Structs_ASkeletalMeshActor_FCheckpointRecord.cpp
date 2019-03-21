#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActor_FCheckpointRecord()
{
    class_< ASkeletalMeshActor_FCheckpointRecord >("ASkeletalMeshActor_FCheckpointRecord", no_init)
        .def_readwrite("Location", &ASkeletalMeshActor_FCheckpointRecord::Location)
        .def_readwrite("Rotation", &ASkeletalMeshActor_FCheckpointRecord::Rotation)
  ;
}