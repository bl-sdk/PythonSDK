#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnLootAtPoints()
{
    class_< UBehavior_SpawnLootAtPoints, bases< UBehavior_SpawnLoot >  , boost::noncopyable>("UBehavior_SpawnLootAtPoints", no_init)
        .def_readwrite("SpawnPoints", &UBehavior_SpawnLootAtPoints::SpawnPoints)
        .def_readwrite("SpawnVelocity", &UBehavior_SpawnLootAtPoints::SpawnVelocity)
        .def_readwrite("SpawnVelocityRelativeTo", &UBehavior_SpawnLootAtPoints::SpawnVelocityRelativeTo)
        .def_readwrite("NextSpawnPointIndex", &UBehavior_SpawnLootAtPoints::NextSpawnPointIndex)
        .def("StaticClass", &UBehavior_SpawnLootAtPoints::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetNextSpawnPointIndex", &UBehavior_SpawnLootAtPoints::GetNextSpawnPointIndex)
        .def("DropItemFromSpawnPoint", &UBehavior_SpawnLootAtPoints::DropItemFromSpawnPoint)
        .def("AttachItemToSpawnPoint", &UBehavior_SpawnLootAtPoints::AttachItemToSpawnPoint)
        .def("PlaceSpawnedItems", &UBehavior_SpawnLootAtPoints::PlaceSpawnedItems)
        .staticmethod("StaticClass")
  ;
}