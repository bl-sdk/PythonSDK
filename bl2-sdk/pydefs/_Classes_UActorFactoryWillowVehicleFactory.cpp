#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowVehicleFactory()
{
    py::class_< UActorFactoryWillowVehicleFactory,  UActorFactoryWillowVehicle   >("UActorFactoryWillowVehicleFactory")
        .def("StaticClass", &UActorFactoryWillowVehicleFactory::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}