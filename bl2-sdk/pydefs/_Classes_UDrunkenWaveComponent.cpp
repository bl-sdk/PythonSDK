#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrunkenWaveComponent()
{
    class_< UDrunkenWaveComponent, bases< UMovementComponent >  , boost::noncopyable>("UDrunkenWaveComponent", no_init)
        .def_readwrite("MaxRandomWaveOffsetTime", &UDrunkenWaveComponent::MaxRandomWaveOffsetTime)
        .def_readwrite("Waves", &UDrunkenWaveComponent::Waves)
        .def_readwrite("GlobalWaveScale", &UDrunkenWaveComponent::GlobalWaveScale)
        .def_readwrite("WaveOffsetTime", &UDrunkenWaveComponent::WaveOffsetTime)
        .def_readwrite("StartApproachDistance", &UDrunkenBaseComponent::StartApproachDistance)
        .def_readwrite("StartDelayTime", &UDrunkenBaseComponent::StartDelayTime)
        .def_readwrite("EaseInTime", &UDrunkenBaseComponent::EaseInTime)
        .def_readwrite("StartTime", &UDrunkenBaseComponent::StartTime)
        .def_readwrite("RandomNumberSeed", &UDrunkenBaseComponent::RandomNumberSeed)
        .def_readonly("UnknownData00", &UDrunkenBaseComponent::UnknownData00)
        .def_readwrite("LastVelocityRotOffset", &UDrunkenBaseComponent::LastVelocityRotOffset)
        .def_readwrite("LastAccelRotOffset", &UDrunkenBaseComponent::LastAccelRotOffset)
        .def("StaticClass", &UDrunkenWaveComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("GenerateRandomNumberSeed", &UDrunkenBaseComponent::GenerateRandomNumberSeed)
        .def("SetRandomNumberSeed", &UDrunkenBaseComponent::SetRandomNumberSeed)
        .def("Init", &UDrunkenBaseComponent::Init)
        .staticmethod("StaticClass")
  ;
}