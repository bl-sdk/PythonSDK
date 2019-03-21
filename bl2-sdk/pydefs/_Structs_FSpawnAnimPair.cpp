#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpawnAnimPair()
{
    class_< FSpawnAnimPair >("FSpawnAnimPair", no_init)
        .def_readwrite("SpawnedAnim", &FSpawnAnimPair::SpawnedAnim)
        .def_readwrite("PointAnim", &FSpawnAnimPair::PointAnim)
  ;
}