#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAutoAimStrategyDefinition(py::module &m)
{
    py::class_< UWillowAutoAimStrategyDefinition,  UGBXDefinition   >(m, "UWillowAutoAimStrategyDefinition")
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
        .def("GetProfileDefinition", &UWillowAutoAimStrategyDefinition::GetProfileDefinition, py::return_value_policy::reference)
          ;
}