#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackHeadTracking()
{
    class_< UInterpTrackHeadTracking, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackHeadTracking", no_init)
        .def_readwrite("HeadTrackingTrack", &UInterpTrackHeadTracking::HeadTrackingTrack)
        .def_readwrite("TrackControllerName", &UInterpTrackHeadTracking::TrackControllerName)
        .def_readwrite("LookAtActorRadius", &UInterpTrackHeadTracking::LookAtActorRadius)
        .def_readwrite("MaxLookAtTime", &UInterpTrackHeadTracking::MaxLookAtTime)
        .def_readwrite("MinLookAtTime", &UInterpTrackHeadTracking::MinLookAtTime)
        .def_readwrite("MaxInterestTime", &UInterpTrackHeadTracking::MaxInterestTime)
        .def_readwrite("ActorClassesToLookAt", &UInterpTrackHeadTracking::ActorClassesToLookAt)
        .def_readwrite("TargetBoneNames", &UInterpTrackHeadTracking::TargetBoneNames)
        .def("StaticClass", &UInterpTrackHeadTracking::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}