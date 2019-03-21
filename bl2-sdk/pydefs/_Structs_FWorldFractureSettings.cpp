#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWorldFractureSettings(py::object m)
{
    py::class_< FWorldFractureSettings >(m, "FWorldFractureSettings")
        .def_readwrite("ChanceOfPhysicsChunkOverride", &FWorldFractureSettings::ChanceOfPhysicsChunkOverride)
        .def_readwrite("MaxExplosionChunkSize", &FWorldFractureSettings::MaxExplosionChunkSize)
        .def_readwrite("MaxDamageChunkSize", &FWorldFractureSettings::MaxDamageChunkSize)
        .def_readwrite("MaxNumFacturedChunksToSpawnInAFrame", &FWorldFractureSettings::MaxNumFacturedChunksToSpawnInAFrame)
        .def_readwrite("FractureExplosionVelScale", &FWorldFractureSettings::FractureExplosionVelScale)
  ;
}