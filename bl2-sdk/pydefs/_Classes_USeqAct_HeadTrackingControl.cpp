#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_HeadTrackingControl()
{
    py::class_< USeqAct_HeadTrackingControl,  USequenceAction   >("USeqAct_HeadTrackingControl")
        .def_readwrite("TrackControllerName", &USeqAct_HeadTrackingControl::TrackControllerName)
        .def_readwrite("LookAtActorRadius", &USeqAct_HeadTrackingControl::LookAtActorRadius)
        .def_readwrite("MaxLookAtTime", &USeqAct_HeadTrackingControl::MaxLookAtTime)
        .def_readwrite("MinLookAtTime", &USeqAct_HeadTrackingControl::MinLookAtTime)
        .def_readwrite("MaxInterestTime", &USeqAct_HeadTrackingControl::MaxInterestTime)
        .def_readwrite("ActorClassesToLookAt", &USeqAct_HeadTrackingControl::ActorClassesToLookAt)
        .def_readwrite("TargetBoneNames", &USeqAct_HeadTrackingControl::TargetBoneNames)
        .def_readwrite("LookAtTargets", &USeqAct_HeadTrackingControl::LookAtTargets)
        .def_readonly("UnknownData00", &USeqAct_HeadTrackingControl::UnknownData00)
        .def("StaticClass", &USeqAct_HeadTrackingControl::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &USeqAct_HeadTrackingControl::eventActivated)
        .def("eventGetObjClassVersion", &USeqAct_HeadTrackingControl::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}