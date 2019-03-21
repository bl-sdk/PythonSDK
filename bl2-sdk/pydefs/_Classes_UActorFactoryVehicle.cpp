#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryVehicle(py::object m)
{
    py::class_< UActorFactoryVehicle,  UActorFactory   >(m, "UActorFactoryVehicle")
        .def_readwrite("VehicleClass", &UActorFactoryVehicle::VehicleClass)
        .def("StaticClass", &UActorFactoryVehicle::StaticClass, py::return_value_policy::reference)
          ;
}