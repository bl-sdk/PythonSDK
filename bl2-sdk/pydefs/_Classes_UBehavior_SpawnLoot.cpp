#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnLoot()
{
    py::class_< UBehavior_SpawnLoot,  UBehaviorBase   >("UBehavior_SpawnLoot")
        .def_readwrite("ItemPools", &UBehavior_SpawnLoot::ItemPools)
        .def_readwrite("Torque", &UBehavior_SpawnLoot::Torque)
        .def("StaticClass", &UBehavior_SpawnLoot::StaticClass, py::return_value_policy::reference)
        .def("GetOrientationFromContextObject", &UBehavior_SpawnLoot::GetOrientationFromContextObject)
        .def("GetLocationFromContextObject", &UBehavior_SpawnLoot::GetLocationFromContextObject)
        .def("PlaceSpawnedItems", &UBehavior_SpawnLoot::PlaceSpawnedItems)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnLoot::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}