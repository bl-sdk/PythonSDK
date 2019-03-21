#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHeadTrackingComponent()
{
    class_< UHeadTrackingComponent, bases< UActorComponent >  , boost::noncopyable>("UHeadTrackingComponent", no_init)
        .def_readwrite("TrackControllerName", &UHeadTrackingComponent::TrackControllerName)
        .def_readwrite("LookAtActorRadius", &UHeadTrackingComponent::LookAtActorRadius)
        .def_readwrite("MaxLookAtTime", &UHeadTrackingComponent::MaxLookAtTime)
        .def_readwrite("MinLookAtTime", &UHeadTrackingComponent::MinLookAtTime)
        .def_readwrite("MaxInterestTime", &UHeadTrackingComponent::MaxInterestTime)
        .def_readwrite("ActorClassesToLookAt", &UHeadTrackingComponent::ActorClassesToLookAt)
        .def_readwrite("TargetBoneNames", &UHeadTrackingComponent::TargetBoneNames)
        .def_readonly("UnknownData00", &UHeadTrackingComponent::UnknownData00)
        .def_readwrite("SkeletalMeshComp", &UHeadTrackingComponent::SkeletalMeshComp)
        .def_readwrite("TrackControls", &UHeadTrackingComponent::TrackControls)
        .def_readwrite("RootMeshLocation", &UHeadTrackingComponent::RootMeshLocation)
        .def_readwrite("RootMeshRotation", &UHeadTrackingComponent::RootMeshRotation)
        .def("StaticClass", &UHeadTrackingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}