#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowVehicle_WheeledVehicle()
{
    class_< AWillowVehicle_WheeledVehicle, bases< AWillowVehicle >  , boost::noncopyable>("AWillowVehicle_WheeledVehicle", no_init)
        .def_readwrite("DriftingTimeStamp", &AWillowVehicle_WheeledVehicle::DriftingTimeStamp)
        .def_readwrite("BeamTemplate", &AWillowVehicle_WheeledVehicle::BeamTemplate)
        .def_readwrite("TemplateFF", &AWillowVehicle_WheeledVehicle::TemplateFF)
        .def("StaticClass", &AWillowVehicle_WheeledVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetWheelIndexFromBoneName", &AWillowVehicle_WheeledVehicle::GetWheelIndexFromBoneName)
        .def("UnwrapToSimObj", &AWillowVehicle_WheeledVehicle::UnwrapToSimObj)
        .def("ProcessViewRotationInVehicle", &AWillowVehicle_WheeledVehicle::ProcessViewRotationInVehicle)
        .def("ServerNoHandbrake", &AWillowVehicle_WheeledVehicle::ServerNoHandbrake)
        .def("ServerHandBrake", &AWillowVehicle_WheeledVehicle::ServerHandBrake)
        .def("NoHandbrake", &AWillowVehicle_WheeledVehicle::NoHandbrake)
        .def("Handbrake", &AWillowVehicle_WheeledVehicle::Handbrake)
        .def("PostBeginPlay", &AWillowVehicle_WheeledVehicle::PostBeginPlay)
        .def("PreBeginPlay", &AWillowVehicle_WheeledVehicle::PreBeginPlay)
        .staticmethod("StaticClass")
  ;
}