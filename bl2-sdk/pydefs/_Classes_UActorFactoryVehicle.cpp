#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryVehicle(py::module &m)
{
    py::class_< UActorFactoryVehicle,  UActorFactory   >(m, "UActorFactoryVehicle")
		.def_static("StaticClass", &UActorFactoryVehicle::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VehicleClass", &UActorFactoryVehicle::VehicleClass)
          ;
}