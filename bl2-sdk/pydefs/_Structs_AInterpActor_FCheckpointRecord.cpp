#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AInterpActor_FCheckpointRecord()
{
    class_< AInterpActor_FCheckpointRecord >("AInterpActor_FCheckpointRecord", no_init)
        .def_readwrite("Location", &AInterpActor_FCheckpointRecord::Location)
        .def_readwrite("Rotation", &AInterpActor_FCheckpointRecord::Rotation)
        .def_readwrite("CollisionType", &AInterpActor_FCheckpointRecord::CollisionType)
  ;
}