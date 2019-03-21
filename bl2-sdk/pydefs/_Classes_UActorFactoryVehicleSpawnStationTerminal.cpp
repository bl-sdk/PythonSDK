#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryVehicleSpawnStationTerminal()
{
    class_< UActorFactoryVehicleSpawnStationTerminal, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryVehicleSpawnStationTerminal", no_init)
        .def_readwrite("Definition", &UActorFactoryInteractiveObject::Definition)
        .def("StaticClass", &UActorFactoryVehicleSpawnStationTerminal::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}