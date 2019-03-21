#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnFromVehicleSpawnStation()
{
    class_< UBehavior_SpawnFromVehicleSpawnStation, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnFromVehicleSpawnStation", no_init)
        .def("StaticClass", &UBehavior_SpawnFromVehicleSpawnStation::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SpawnFromVehicleSpawnStation::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}