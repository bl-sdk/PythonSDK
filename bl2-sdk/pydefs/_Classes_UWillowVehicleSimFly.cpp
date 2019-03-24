#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimFly(py::module &m)
{
    py::class_< UWillowVehicleSimFly,  USVehicleSimBase   >(m, "UWillowVehicleSimFly")
		.def_static("StaticClass", &UWillowVehicleSimFly::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RiseSpeed", &UWillowVehicleSimFly::RiseSpeed)
        .def_readwrite("MoveSpeed", &UWillowVehicleSimFly::MoveSpeed)
          ;
}