#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWorldFractureSettings()
{
    class_< FWorldFractureSettings >("FWorldFractureSettings", no_init)
        .def_readwrite("ChanceOfPhysicsChunkOverride", &FWorldFractureSettings::ChanceOfPhysicsChunkOverride)
        .def_readwrite("MaxExplosionChunkSize", &FWorldFractureSettings::MaxExplosionChunkSize)
        .def_readwrite("MaxDamageChunkSize", &FWorldFractureSettings::MaxDamageChunkSize)
        .def_readwrite("MaxNumFacturedChunksToSpawnInAFrame", &FWorldFractureSettings::MaxNumFacturedChunksToSpawnInAFrame)
        .def_readwrite("FractureExplosionVelScale", &FWorldFractureSettings::FractureExplosionVelScale)
  ;
}