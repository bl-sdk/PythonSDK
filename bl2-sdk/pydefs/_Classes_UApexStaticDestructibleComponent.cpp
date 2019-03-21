#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UApexStaticDestructibleComponent()
{
    class_< UApexStaticDestructibleComponent, bases< UApexComponentBase >  , boost::noncopyable>("UApexStaticDestructibleComponent", no_init)
        .def_readwrite("SleepEnergyThreshold", &UApexStaticDestructibleComponent::SleepEnergyThreshold)
        .def_readwrite("SleepDamping", &UApexStaticDestructibleComponent::SleepDamping)
        .def_readwrite("ApexDestructibleActor", &UApexStaticDestructibleComponent::ApexDestructibleActor)
        .def_readwrite("ApexDestructiblePreview", &UApexStaticDestructibleComponent::ApexDestructiblePreview)
        .def("StaticClass", &UApexStaticDestructibleComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}