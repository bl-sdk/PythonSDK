#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimCar()
{
    class_< UWillowVehicleSimCar, bases< USVehicleSimCar >  , boost::noncopyable>("UWillowVehicleSimCar", no_init)
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
        .def("StaticClass", &UWillowVehicleSimCar::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResetTorqueCurve", &UWillowVehicleSimCar::ResetTorqueCurve)
        .def("StretchTorqueCurve", &UWillowVehicleSimCar::StretchTorqueCurve)
        .staticmethod("StaticClass")
  ;
}