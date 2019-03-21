#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryMissionPickupSpawner()
{
    class_< UActorFactoryMissionPickupSpawner, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryMissionPickupSpawner", no_init)
        .def_readwrite("Definition", &UActorFactoryMissionPickupSpawner::Definition)
        .def("StaticClass", &UActorFactoryMissionPickupSpawner::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}