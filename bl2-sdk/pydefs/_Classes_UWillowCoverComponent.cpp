#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowCoverComponent()
{
    class_< UWillowCoverComponent, bases< UActorComponent >  , boost::noncopyable>("UWillowCoverComponent", no_init)
        .def_readwrite("AIPawn", &UWillowCoverComponent::AIPawn)
        .def_readwrite("LastAction", &UWillowCoverComponent::LastAction)
        .def("StaticClass", &UWillowCoverComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("IdleTimer", &UWillowCoverComponent::IdleTimer)
        .def("FireTimer", &UWillowCoverComponent::FireTimer)
        .def("GetRange", &UWillowCoverComponent::GetRange)
        .def("eventCanFire", &UWillowCoverComponent::eventCanFire)
        .def("ClearCover", &UWillowCoverComponent::ClearCover)
        .def("PlayTimedAction", &UWillowCoverComponent::PlayTimedAction)
        .def("eventUpdateAction", &UWillowCoverComponent::eventUpdateAction)
        .def("GetAction", &UWillowCoverComponent::GetAction)
        .def("GetStance", &UWillowCoverComponent::GetStance, return_value_policy< reference_existing_object >())
        .def("GetCoverRotation", &UWillowCoverComponent::GetCoverRotation)
        .def("GetCoverLocation", &UWillowCoverComponent::GetCoverLocation)
        .def("ResetExposure", &UWillowCoverComponent::ResetExposure)
        .def("ActionFinished", &UWillowCoverComponent::ActionFinished)
        .staticmethod("StaticClass")
  ;
}