#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackHeadTracking(py::module &m)
{
    py::class_< UInterpTrackHeadTracking,  UInterpTrack   >(m, "UInterpTrackHeadTracking")
        .def_readwrite("HeadTrackingTrack", &UInterpTrackHeadTracking::HeadTrackingTrack)
        .def_readwrite("TrackControllerName", &UInterpTrackHeadTracking::TrackControllerName)
        .def_readwrite("LookAtActorRadius", &UInterpTrackHeadTracking::LookAtActorRadius)
        .def_readwrite("MaxLookAtTime", &UInterpTrackHeadTracking::MaxLookAtTime)
        .def_readwrite("MinLookAtTime", &UInterpTrackHeadTracking::MinLookAtTime)
        .def_readwrite("MaxInterestTime", &UInterpTrackHeadTracking::MaxInterestTime)
        .def_readwrite("ActorClassesToLookAt", &UInterpTrackHeadTracking::ActorClassesToLookAt)
        .def_readwrite("TargetBoneNames", &UInterpTrackHeadTracking::TargetBoneNames)
        .def("StaticClass", &UInterpTrackHeadTracking::StaticClass, py::return_value_policy::reference)
          ;
}