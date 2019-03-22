#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrunkenWaveComponent(py::module &m)
{
    py::class_< UDrunkenWaveComponent,  UMovementComponent   >(m, "UDrunkenWaveComponent")
        .def_readwrite("MaxRandomWaveOffsetTime", &UDrunkenWaveComponent::MaxRandomWaveOffsetTime)
        .def_readwrite("Waves", &UDrunkenWaveComponent::Waves)
        .def_readwrite("GlobalWaveScale", &UDrunkenWaveComponent::GlobalWaveScale)
        .def_readwrite("WaveOffsetTime", &UDrunkenWaveComponent::WaveOffsetTime)
        .def_readwrite("StartApproachDistance", &UDrunkenBaseComponent::StartApproachDistance)
        .def_readwrite("StartDelayTime", &UDrunkenBaseComponent::StartDelayTime)
        .def_readwrite("EaseInTime", &UDrunkenBaseComponent::EaseInTime)
        .def_readwrite("StartTime", &UDrunkenBaseComponent::StartTime)
        .def_readwrite("RandomNumberSeed", &UDrunkenBaseComponent::RandomNumberSeed)
        .def_readwrite("LastVelocityRotOffset", &UDrunkenBaseComponent::LastVelocityRotOffset)
        .def_readwrite("LastAccelRotOffset", &UDrunkenBaseComponent::LastAccelRotOffset)
        .def("StaticClass", &UDrunkenWaveComponent::StaticClass, py::return_value_policy::reference)
        .def("GenerateRandomNumberSeed", &UDrunkenBaseComponent::GenerateRandomNumberSeed)
        .def("SetRandomNumberSeed", &UDrunkenBaseComponent::SetRandomNumberSeed)
        .def("Init", &UDrunkenBaseComponent::Init)
          ;
}