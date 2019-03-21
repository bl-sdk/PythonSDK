#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAutoAimStrategyDefinition()
{
    class_< UWillowAutoAimStrategyDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowAutoAimStrategyDefinition", no_init)
        .def_readwrite("MaxTargetDistance", &UWillowAutoAimStrategyDefinition::MaxTargetDistance)
        .def_readwrite("MinTargetDistance", &UWillowAutoAimStrategyDefinition::MinTargetDistance)
        .def_readwrite("RadiusMultiplier", &UWillowAutoAimStrategyDefinition::RadiusMultiplier)
        .def_readwrite("SustainTime", &UWillowAutoAimStrategyDefinition::SustainTime)
        .def_readwrite("AcquireTime", &UWillowAutoAimStrategyDefinition::AcquireTime)
        .def_readwrite("ChangeTime", &UWillowAutoAimStrategyDefinition::ChangeTime)
        .def_readwrite("MaxSnapAngle", &UWillowAutoAimStrategyDefinition::MaxSnapAngle)
        .def_readwrite("DistanceOffset", &UWillowAutoAimStrategyDefinition::DistanceOffset)
        .def_readwrite("Profiles", &UWillowAutoAimStrategyDefinition::Profiles)
        .def_readwrite("DefaultProfile", &UWillowAutoAimStrategyDefinition::DefaultProfile)
        .def("StaticClass", &UWillowAutoAimStrategyDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetProfileDefinition", &UWillowAutoAimStrategyDefinition::GetProfileDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}