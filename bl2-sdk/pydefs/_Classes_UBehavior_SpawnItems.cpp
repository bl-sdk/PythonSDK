#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnItems()
{
    class_< UBehavior_SpawnItems, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnItems", no_init)
        .def_readwrite("ItemDropOffset", &UBehavior_SpawnItems::ItemDropOffset)
        .def_readwrite("ItemDropVelocity", &UBehavior_SpawnItems::ItemDropVelocity)
        .def_readwrite("ItemScatterOffset", &UBehavior_SpawnItems::ItemScatterOffset)
        .def_readwrite("ExpLevel", &UBehavior_SpawnItems::ExpLevel)
        .def_readwrite("InstanceDataName", &UBehavior_SpawnItems::InstanceDataName)
        .def_readwrite("ItemPoolList", &UBehavior_SpawnItems::ItemPoolList)
        .def_readwrite("ItemPoolIncludedLists", &UBehavior_SpawnItems::ItemPoolIncludedLists)
        .def_readwrite("AttachmentPointNames", &UBehavior_SpawnItems::AttachmentPointNames)
        .def_readwrite("Torque", &UBehavior_SpawnItems::Torque)
        .def_readwrite("ItemSpawnSocket", &UBehavior_SpawnItems::ItemSpawnSocket)
        .def("StaticClass", &UBehavior_SpawnItems::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SpawnItems::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}