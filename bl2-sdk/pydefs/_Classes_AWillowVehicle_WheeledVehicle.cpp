#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVehicle_WheeledVehicle(py::module &m)
{
    py::class_< AWillowVehicle_WheeledVehicle,  AWillowVehicle   >(m, "AWillowVehicle_WheeledVehicle")
		.def_static("StaticClass", &AWillowVehicle_WheeledVehicle::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DriftingTimeStamp", &AWillowVehicle_WheeledVehicle::DriftingTimeStamp)
        .def_readwrite("BeamTemplate", &AWillowVehicle_WheeledVehicle::BeamTemplate)
        .def_readwrite("TemplateFF", &AWillowVehicle_WheeledVehicle::TemplateFF)
        .def("GetWheelIndexFromBoneName", &AWillowVehicle_WheeledVehicle::GetWheelIndexFromBoneName)
        .def("UnwrapToSimObj", &AWillowVehicle_WheeledVehicle::UnwrapToSimObj)
        .def("ProcessViewRotationInVehicle", &AWillowVehicle_WheeledVehicle::ProcessViewRotationInVehicle)
        .def("ServerNoHandbrake", &AWillowVehicle_WheeledVehicle::ServerNoHandbrake)
        .def("ServerHandBrake", &AWillowVehicle_WheeledVehicle::ServerHandBrake)
        .def("NoHandbrake", &AWillowVehicle_WheeledVehicle::NoHandbrake)
        .def("Handbrake", &AWillowVehicle_WheeledVehicle::Handbrake)
        .def("PostBeginPlay", &AWillowVehicle_WheeledVehicle::PostBeginPlay)
        .def("PreBeginPlay", &AWillowVehicle_WheeledVehicle::PreBeginPlay)
          ;
}