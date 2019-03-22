#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInterpActor_FCheckpointRecord(py::module &m)
{
    py::class_< AInterpActor_FCheckpointRecord >(m, "AInterpActor_FCheckpointRecord")
        .def_readwrite("Location", &AInterpActor_FCheckpointRecord::Location)
        .def_readwrite("Rotation", &AInterpActor_FCheckpointRecord::Rotation)
        .def_readwrite("CollisionType", &AInterpActor_FCheckpointRecord::CollisionType)
  ;
}