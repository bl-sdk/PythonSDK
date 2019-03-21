#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AISpawn()
{
    class_< UBehavior_AISpawn, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AISpawn", no_init)
        .def_readwrite("SpawnPointName", &UBehavior_AISpawn::SpawnPointName)
        .def_readwrite("PopDef", &UBehavior_AISpawn::PopDef)
        .def_readwrite("SpawnContext", &UBehavior_AISpawn::SpawnContext)
        .def_readwrite("InstanceDataName", &UBehavior_AISpawn::InstanceDataName)
        .def_readwrite("OverrideContext", &UBehavior_AISpawn::OverrideContext)
        .def_readwrite("PopulationOverrideName", &UBehavior_AISpawn::PopulationOverrideName)
        .def("StaticClass", &UBehavior_AISpawn::StaticClass, return_value_policy< reference_existing_object >())
        .def("SpawnActor", &UBehavior_AISpawn::SpawnActor, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_AISpawn::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AISpawn::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}