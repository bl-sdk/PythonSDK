#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnLootAroundPoint()
{
    class_< UBehavior_SpawnLootAroundPoint, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnLootAroundPoint", no_init)
        .def_readwrite("CustomLocation", &UBehavior_SpawnLootAroundPoint::CustomLocation)
        .def_readwrite("CircularScatterRadius", &UBehavior_SpawnLootAroundPoint::CircularScatterRadius)
        .def_readwrite("SpawnVelocity", &UBehavior_SpawnLootAroundPoint::SpawnVelocity)
        .def_readwrite("SpawnVelocityRelativeTo", &UBehavior_SpawnLootAroundPoint::SpawnVelocityRelativeTo)
        .def_readwrite("ItemPools", &UBehavior_SpawnLoot::ItemPools)
        .def_readwrite("Torque", &UBehavior_SpawnLoot::Torque)
        .def("StaticClass", &UBehavior_SpawnLootAroundPoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("ScatterItem", &UBehavior_SpawnLootAroundPoint::ScatterItem)
        .def("PlaceSpawnedItems", &UBehavior_SpawnLootAroundPoint::PlaceSpawnedItems)
        .def("GetOrientationFromContextObject", &UBehavior_SpawnLoot::GetOrientationFromContextObject)
        .def("GetLocationFromContextObject", &UBehavior_SpawnLoot::GetLocationFromContextObject)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnLoot::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}