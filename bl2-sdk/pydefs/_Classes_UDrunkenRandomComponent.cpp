#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrunkenRandomComponent()
{
    class_< UDrunkenRandomComponent, bases< UDrunkenBaseComponent >  , boost::noncopyable>("UDrunkenRandomComponent", no_init)
        .def_readwrite("PathCorrectionInterval", &UDrunkenRandomComponent::PathCorrectionInterval)
        .def_readwrite("TurnSpeed", &UDrunkenRandomComponent::TurnSpeed)
        .def_readwrite("ApproachTurnSpeed", &UDrunkenRandomComponent::ApproachTurnSpeed)
        .def_readwrite("MaxSpreadAngle", &UDrunkenRandomComponent::MaxSpreadAngle)
        .def_readwrite("MaxDepartureAngle", &UDrunkenRandomComponent::MaxDepartureAngle)
        .def_readwrite("LastUpdateTime", &UDrunkenRandomComponent::LastUpdateTime)
        .def_readwrite("LastDepartureAngle", &UDrunkenRandomComponent::LastDepartureAngle)
        .def_readwrite("LastRotationOffset", &UDrunkenRandomComponent::LastRotationOffset)
        .def_readwrite("TargetRotationOffset", &UDrunkenRandomComponent::TargetRotationOffset)
        .def("StaticClass", &UDrunkenRandomComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}