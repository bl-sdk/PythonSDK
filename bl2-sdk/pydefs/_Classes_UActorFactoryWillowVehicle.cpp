#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowVehicle()
{
    py::class_< UActorFactoryWillowVehicle,  UActorFactory   >("UActorFactoryWillowVehicle")
        .def_readwrite("VehicleArchetype", &UActorFactoryWillowVehicle::VehicleArchetype)
        .def("StaticClass", &UActorFactoryWillowVehicle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}