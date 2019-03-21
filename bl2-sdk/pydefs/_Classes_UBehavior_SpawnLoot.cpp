#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnLoot()
{
    class_< UBehavior_SpawnLoot, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnLoot", no_init)
        .def_readwrite("ItemPools", &UBehavior_SpawnLoot::ItemPools)
        .def_readwrite("Torque", &UBehavior_SpawnLoot::Torque)
        .def("StaticClass", &UBehavior_SpawnLoot::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetOrientationFromContextObject", &UBehavior_SpawnLoot::GetOrientationFromContextObject)
        .def("GetLocationFromContextObject", &UBehavior_SpawnLoot::GetLocationFromContextObject)
        .def("PlaceSpawnedItems", &UBehavior_SpawnLoot::PlaceSpawnedItems)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnLoot::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}