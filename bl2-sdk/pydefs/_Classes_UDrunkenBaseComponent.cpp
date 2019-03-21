#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrunkenBaseComponent()
{
    py::class_< UDrunkenBaseComponent,  UMovementComponent   >("UDrunkenBaseComponent")
        .def_readwrite("StartApproachDistance", &UDrunkenBaseComponent::StartApproachDistance)
        .def_readwrite("StartDelayTime", &UDrunkenBaseComponent::StartDelayTime)
        .def_readwrite("EaseInTime", &UDrunkenBaseComponent::EaseInTime)
        .def_readwrite("StartTime", &UDrunkenBaseComponent::StartTime)
        .def_readwrite("RandomNumberSeed", &UDrunkenBaseComponent::RandomNumberSeed)
        .def_readonly("UnknownData00", &UDrunkenBaseComponent::UnknownData00)
        .def_readwrite("LastVelocityRotOffset", &UDrunkenBaseComponent::LastVelocityRotOffset)
        .def_readwrite("LastAccelRotOffset", &UDrunkenBaseComponent::LastAccelRotOffset)
        .def("StaticClass", &UDrunkenBaseComponent::StaticClass, py::return_value_policy::reference)
        .def("GenerateRandomNumberSeed", &UDrunkenBaseComponent::GenerateRandomNumberSeed)
        .def("SetRandomNumberSeed", &UDrunkenBaseComponent::SetRandomNumberSeed)
        .def("Init", &UDrunkenBaseComponent::Init)
        .staticmethod("StaticClass")
  ;
}