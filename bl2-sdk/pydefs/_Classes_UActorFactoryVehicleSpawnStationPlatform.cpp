#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryVehicleSpawnStationPlatform()
{
    py::class_< UActorFactoryVehicleSpawnStationPlatform,  UActorFactoryInteractiveObject   >("UActorFactoryVehicleSpawnStationPlatform")
        .def("StaticClass", &UActorFactoryVehicleSpawnStationPlatform::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}