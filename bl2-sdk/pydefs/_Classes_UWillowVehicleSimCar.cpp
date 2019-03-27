#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimCar(py::module &m)
{
    py::class_< UWillowVehicleSimCar,  USVehicleSimCar   >(m, "UWillowVehicleSimCar")
		.def_static("StaticClass", &UWillowVehicleSimCar::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TorqueVSpeedCurve", &UWillowVehicleSimCar::TorqueVSpeedCurve)
        .def_readwrite("DefaultTorqueVSpeedCurve", &UWillowVehicleSimCar::DefaultTorqueVSpeedCurve)
        .def_readwrite("TotalSpinVel", &UWillowVehicleSimCar::TotalSpinVel)
        .def_readwrite("LSDFactor", &UWillowVehicleSimCar::LSDFactor)
        .def_readwrite("ThrottleSpeed", &UWillowVehicleSimCar::ThrottleSpeed)
        .def_readwrite("SlopeMinDriveLimit", &UWillowVehicleSimCar::SlopeMinDriveLimit)
        .def_readwrite("SlopeMaxDriveLimit", &UWillowVehicleSimCar::SlopeMaxDriveLimit)
        .def_readwrite("MinRPM", &UWillowVehicleSimCar::MinRPM)
        .def_readwrite("MaxRPM", &UWillowVehicleSimCar::MaxRPM)
        .def_readwrite("ActualThrottle", &UWillowVehicleSimCar::ActualThrottle)
        .def_readwrite("LastLerpVal", &UWillowVehicleSimCar::LastLerpVal)
        .def_readwrite("WheelSmoothingSpeed", &UWillowVehicleSimCar::WheelSmoothingSpeed)
        .def_readwrite("FrontalCollisionGripFactor", &UWillowVehicleSimCar::FrontalCollisionGripFactor)
        .def_readwrite("InAirUprightTorqueFactor", &UWillowVehicleSimCar::InAirUprightTorqueFactor)
        .def_readwrite("InAirUprightMaxTorque", &UWillowVehicleSimCar::InAirUprightMaxTorque)
        .def_readwrite("PhysicalMaterialTireModels", &UWillowVehicleSimCar::PhysicalMaterialTireModels)
        .def_readwrite("CachedMaxTorqueCurveSpeed", &UWillowVehicleSimCar::CachedMaxTorqueCurveSpeed)
        .def_readwrite("CachedSpeedCapMultiplier", &UWillowVehicleSimCar::CachedSpeedCapMultiplier)
        .def("ResetTorqueCurve", &UWillowVehicleSimCar::ResetTorqueCurve)
        .def("StretchTorqueCurve", &UWillowVehicleSimCar::StretchTorqueCurve)
          ;
}