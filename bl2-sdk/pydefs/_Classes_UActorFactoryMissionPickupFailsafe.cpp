#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryMissionPickupFailsafe()
{
    class_< UActorFactoryMissionPickupFailsafe, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryMissionPickupFailsafe", no_init)
        .def_readwrite("Definition", &UActorFactoryMissionPickupSpawner::Definition)
        .def("StaticClass", &UActorFactoryMissionPickupFailsafe::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}