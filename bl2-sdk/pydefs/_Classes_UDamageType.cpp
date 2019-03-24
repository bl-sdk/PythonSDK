#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamageType(py::module &m)
{
    py::class_< UDamageType,  UObject   >(m, "UDamageType")
		.def_static("StaticClass", &UDamageType::StaticClass, py::return_value_policy::reference)
        .def_readwrite("KDamageImpulse", &UDamageType::KDamageImpulse)
        .def_readwrite("KDeathVel", &UDamageType::KDeathVel)
        .def_readwrite("KDeathUpKick", &UDamageType::KDeathUpKick)
        .def_readwrite("RadialDamageImpulse", &UDamageType::RadialDamageImpulse)
        .def_readwrite("VehicleDamageScaling", &UDamageType::VehicleDamageScaling)
        .def_readwrite("VehicleMomentumScaling", &UDamageType::VehicleMomentumScaling)
        .def_readwrite("DamagedFFWaveform", &UDamageType::DamagedFFWaveform)
        .def_readwrite("KilledFFWaveform", &UDamageType::KilledFFWaveform)
        .def_readwrite("FracturedMeshDamage", &UDamageType::FracturedMeshDamage)
        .def("VehicleDamageScalingFor", &UDamageType::VehicleDamageScalingFor)
          ;
}