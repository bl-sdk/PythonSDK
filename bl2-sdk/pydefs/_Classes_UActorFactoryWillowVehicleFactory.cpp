#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowVehicleFactory(py::object m)
{
    py::class_< UActorFactoryWillowVehicleFactory,  UActorFactoryWillowVehicle   >(m, "UActorFactoryWillowVehicleFactory")
        .def("StaticClass", &UActorFactoryWillowVehicleFactory::StaticClass, py::return_value_policy::reference)
          ;
}