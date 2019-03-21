#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAwarenessZoneDefinition()
{
    py::class_< UAwarenessZoneDefinition,  UGBXDefinition   >("UAwarenessZoneDefinition")
        .def_readwrite("ZoneName", &UAwarenessZoneDefinition::ZoneName)
        .def_readwrite("OuterRimDistance", &UAwarenessZoneDefinition::OuterRimDistance)
        .def_readwrite("ViewConeStyle", &UAwarenessZoneDefinition::ViewConeStyle)
        .def_readwrite("SpecialExposureBehavior", &UAwarenessZoneDefinition::SpecialExposureBehavior)
        .def_readwrite("HearingBehavior", &UAwarenessZoneDefinition::HearingBehavior)
        .def_readwrite("ViewConeFieldOfViewInDegrees", &UAwarenessZoneDefinition::ViewConeFieldOfViewInDegrees)
        .def_readwrite("MinExposureRatingConsideredVisible", &UAwarenessZoneDefinition::MinExposureRatingConsideredVisible)
        .def_readwrite("ForgetHiddenThreatsAfterXSeconds", &UAwarenessZoneDefinition::ForgetHiddenThreatsAfterXSeconds)
        .def_readwrite("TargetSelectionPriority", &UAwarenessZoneDefinition::TargetSelectionPriority)
        .def_readwrite("ZoneColor", &UAwarenessZoneDefinition::ZoneColor)
        .def_readwrite("TimeFiringAtLastKnownLocation", &UAwarenessZoneDefinition::TimeFiringAtLastKnownLocation)
        .def("StaticClass", &UAwarenessZoneDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}