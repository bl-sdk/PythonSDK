#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFluidInfluenceComponent()
{
    class_< UFluidInfluenceComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UFluidInfluenceComponent", no_init)
        .def_readwrite("FluidActor", &UFluidInfluenceComponent::FluidActor)
        .def_readwrite("InfluenceType", &UFluidInfluenceComponent::InfluenceType)
        .def_readwrite("MaxDistance", &UFluidInfluenceComponent::MaxDistance)
        .def_readwrite("WaveStrength", &UFluidInfluenceComponent::WaveStrength)
        .def_readwrite("WaveFrequency", &UFluidInfluenceComponent::WaveFrequency)
        .def_readwrite("WavePhase", &UFluidInfluenceComponent::WavePhase)
        .def_readwrite("WaveRadius", &UFluidInfluenceComponent::WaveRadius)
        .def_readwrite("RaindropAreaRadius", &UFluidInfluenceComponent::RaindropAreaRadius)
        .def_readwrite("RaindropRadius", &UFluidInfluenceComponent::RaindropRadius)
        .def_readwrite("RaindropStrength", &UFluidInfluenceComponent::RaindropStrength)
        .def_readwrite("RaindropRate", &UFluidInfluenceComponent::RaindropRate)
        .def_readwrite("FlowSpeed", &UFluidInfluenceComponent::FlowSpeed)
        .def_readwrite("FlowNumRipples", &UFluidInfluenceComponent::FlowNumRipples)
        .def_readwrite("FlowSideMotionRadius", &UFluidInfluenceComponent::FlowSideMotionRadius)
        .def_readwrite("FlowWaveRadius", &UFluidInfluenceComponent::FlowWaveRadius)
        .def_readwrite("FlowStrength", &UFluidInfluenceComponent::FlowStrength)
        .def_readwrite("FlowFrequency", &UFluidInfluenceComponent::FlowFrequency)
        .def_readwrite("SphereOuterRadius", &UFluidInfluenceComponent::SphereOuterRadius)
        .def_readwrite("SphereInnerRadius", &UFluidInfluenceComponent::SphereInnerRadius)
        .def_readwrite("SphereStrength", &UFluidInfluenceComponent::SphereStrength)
        .def_readwrite("CurrentAngle", &UFluidInfluenceComponent::CurrentAngle)
        .def_readwrite("CurrentTimer", &UFluidInfluenceComponent::CurrentTimer)
        .def_readwrite("CurrentFluidActor", &UFluidInfluenceComponent::CurrentFluidActor)
        .def("StaticClass", &UFluidInfluenceComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}