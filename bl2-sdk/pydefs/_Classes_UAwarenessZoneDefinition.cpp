#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAwarenessZoneDefinition()
{
    class_< UAwarenessZoneDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UAwarenessZoneDefinition", no_init)
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
        .def("StaticClass", &UAwarenessZoneDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}