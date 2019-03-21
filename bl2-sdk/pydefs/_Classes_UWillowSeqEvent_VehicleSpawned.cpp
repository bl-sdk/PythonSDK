#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_VehicleSpawned()
{
    class_< UWillowSeqEvent_VehicleSpawned, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_VehicleSpawned", no_init)
        .def_readwrite("SpawnedVehicle", &UWillowSeqEvent_VehicleSpawned::SpawnedVehicle)
        .def("StaticClass", &UWillowSeqEvent_VehicleSpawned::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}