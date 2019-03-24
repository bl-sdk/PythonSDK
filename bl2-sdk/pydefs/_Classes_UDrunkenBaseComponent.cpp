#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrunkenBaseComponent(py::module &m)
{
    py::class_< UDrunkenBaseComponent,  UMovementComponent   >(m, "UDrunkenBaseComponent")
		.def_static("StaticClass", &UDrunkenBaseComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StartApproachDistance", &UDrunkenBaseComponent::StartApproachDistance)
        .def_readwrite("StartDelayTime", &UDrunkenBaseComponent::StartDelayTime)
        .def_readwrite("EaseInTime", &UDrunkenBaseComponent::EaseInTime)
        .def_readwrite("StartTime", &UDrunkenBaseComponent::StartTime)
        .def_readwrite("RandomNumberSeed", &UDrunkenBaseComponent::RandomNumberSeed)
        .def_readwrite("LastVelocityRotOffset", &UDrunkenBaseComponent::LastVelocityRotOffset)
        .def_readwrite("LastAccelRotOffset", &UDrunkenBaseComponent::LastAccelRotOffset)
        .def("GenerateRandomNumberSeed", &UDrunkenBaseComponent::GenerateRandomNumberSeed)
        .def("SetRandomNumberSeed", &UDrunkenBaseComponent::SetRandomNumberSeed)
        .def("Init", &UDrunkenBaseComponent::Init)
          ;
}