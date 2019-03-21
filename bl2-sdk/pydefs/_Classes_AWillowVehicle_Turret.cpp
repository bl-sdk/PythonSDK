#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVehicle_Turret()
{
    py::class_< AWillowVehicle_Turret,  AWillowVehicle   >("AWillowVehicle_Turret")
        .def("StaticClass", &AWillowVehicle_Turret::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}