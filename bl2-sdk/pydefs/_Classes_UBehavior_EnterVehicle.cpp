#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_EnterVehicle()
{
    py::class_< UBehavior_EnterVehicle,  UBehaviorBase   >("UBehavior_EnterVehicle")
        .def_readwrite("SeatPos", &UBehavior_EnterVehicle::SeatPos)
        .def_readwrite("VehicleContext", &UBehavior_EnterVehicle::VehicleContext)
        .def("StaticClass", &UBehavior_EnterVehicle::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_EnterVehicle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}