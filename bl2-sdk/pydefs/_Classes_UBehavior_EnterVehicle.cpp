#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_EnterVehicle(py::module &m)
{
    py::class_< UBehavior_EnterVehicle,  UBehaviorBase   >(m, "UBehavior_EnterVehicle")
        .def_readwrite("SeatPos", &UBehavior_EnterVehicle::SeatPos)
        .def_readwrite("VehicleContext", &UBehavior_EnterVehicle::VehicleContext)
        .def("ApplyBehaviorToContext", &UBehavior_EnterVehicle::ApplyBehaviorToContext)
          ;
}