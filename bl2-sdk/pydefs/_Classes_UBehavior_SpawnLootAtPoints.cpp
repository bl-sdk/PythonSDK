#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnLootAtPoints(py::module &m)
{
    py::class_< UBehavior_SpawnLootAtPoints,  UBehavior_SpawnLoot   >(m, "UBehavior_SpawnLootAtPoints")
        .def_readwrite("SpawnPoints", &UBehavior_SpawnLootAtPoints::SpawnPoints)
        .def_readwrite("SpawnVelocity", &UBehavior_SpawnLootAtPoints::SpawnVelocity)
        .def_readwrite("SpawnVelocityRelativeTo", &UBehavior_SpawnLootAtPoints::SpawnVelocityRelativeTo)
        .def_readwrite("NextSpawnPointIndex", &UBehavior_SpawnLootAtPoints::NextSpawnPointIndex)
        .def("GetNextSpawnPointIndex", &UBehavior_SpawnLootAtPoints::GetNextSpawnPointIndex)
        .def("DropItemFromSpawnPoint", &UBehavior_SpawnLootAtPoints::DropItemFromSpawnPoint)
        .def("AttachItemToSpawnPoint", &UBehavior_SpawnLootAtPoints::AttachItemToSpawnPoint)
        .def("PlaceSpawnedItems", &UBehavior_SpawnLootAtPoints::PlaceSpawnedItems)
          ;
}