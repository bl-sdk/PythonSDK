#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleWheelDefinition(py::module &m)
{
    py::class_< UVehicleWheelDefinition,  UGBXDefinition   >(m, "UVehicleWheelDefinition")
		.def_static("StaticClass", &UVehicleWheelDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BoneOffset", &UVehicleWheelDefinition::BoneOffset)
        .def_readwrite("WheelRadius", &UVehicleWheelDefinition::WheelRadius)
        .def_readwrite("SuspensionTravel", &UVehicleWheelDefinition::SuspensionTravel)
        .def_readwrite("SuspensionSpeed", &UVehicleWheelDefinition::SuspensionSpeed)
        .def_readwrite("LongSlipFactor", &UVehicleWheelDefinition::LongSlipFactor)
        .def_readwrite("LatSlipFactor", &UVehicleWheelDefinition::LatSlipFactor)
        .def_readwrite("HandbrakeLongSlipFactor", &UVehicleWheelDefinition::HandbrakeLongSlipFactor)
        .def_readwrite("HandbrakeLatSlipFactor", &UVehicleWheelDefinition::HandbrakeLatSlipFactor)
        .def_readwrite("ParkedSlipFactorLat", &UVehicleWheelDefinition::ParkedSlipFactorLat)
        .def_readwrite("ParkedSlipFactorLong", &UVehicleWheelDefinition::ParkedSlipFactorLong)
          ;
}