#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrunkenBaseComponent()
{
    class_< UDrunkenBaseComponent, bases< UMovementComponent >  , boost::noncopyable>("UDrunkenBaseComponent", no_init)
        .def_readwrite("StartApproachDistance", &UDrunkenBaseComponent::StartApproachDistance)
        .def_readwrite("StartDelayTime", &UDrunkenBaseComponent::StartDelayTime)
        .def_readwrite("EaseInTime", &UDrunkenBaseComponent::EaseInTime)
        .def_readwrite("StartTime", &UDrunkenBaseComponent::StartTime)
        .def_readwrite("RandomNumberSeed", &UDrunkenBaseComponent::RandomNumberSeed)
        .def_readonly("UnknownData00", &UDrunkenBaseComponent::UnknownData00)
        .def_readwrite("LastVelocityRotOffset", &UDrunkenBaseComponent::LastVelocityRotOffset)
        .def_readwrite("LastAccelRotOffset", &UDrunkenBaseComponent::LastAccelRotOffset)
        .def("StaticClass", &UDrunkenBaseComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("GenerateRandomNumberSeed", &UDrunkenBaseComponent::GenerateRandomNumberSeed)
        .def("SetRandomNumberSeed", &UDrunkenBaseComponent::SetRandomNumberSeed)
        .def("Init", &UDrunkenBaseComponent::Init)
        .staticmethod("StaticClass")
  ;
}