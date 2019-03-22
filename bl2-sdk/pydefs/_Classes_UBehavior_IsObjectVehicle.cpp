#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IsObjectVehicle(py::module &m)
{
    py::class_< UBehavior_IsObjectVehicle,  UBehaviorBase   >(m, "UBehavior_IsObjectVehicle")
        .def_readwrite("VehicleCandidate", &UBehavior_IsObjectVehicle::VehicleCandidate)
        .def("StaticClass", &UBehavior_IsObjectVehicle::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_IsObjectVehicle::ApplyBehaviorToContext)
          ;
}