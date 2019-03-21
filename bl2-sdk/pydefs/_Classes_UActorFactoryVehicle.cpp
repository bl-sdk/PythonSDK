#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryVehicle()
{
    py::class_< UActorFactoryVehicle,  UActorFactory   >("UActorFactoryVehicle")
        .def_readwrite("VehicleClass", &UActorFactoryVehicle::VehicleClass)
        .def("StaticClass", &UActorFactoryVehicle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}