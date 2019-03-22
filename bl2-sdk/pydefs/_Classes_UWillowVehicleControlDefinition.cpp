#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVehicleControlDefinition(py::module &m)
{
    py::class_< UWillowVehicleControlDefinition,  UGBXDefinition   >(m, "UWillowVehicleControlDefinition")
        .def_readwrite("CameraSetting", &UWillowVehicleControlDefinition::CameraSetting)
        .def_readwrite("SteeringSetting", &UWillowVehicleControlDefinition::SteeringSetting)
        .def("StaticClass", &UWillowVehicleControlDefinition::StaticClass, py::return_value_policy::reference)
          ;
}