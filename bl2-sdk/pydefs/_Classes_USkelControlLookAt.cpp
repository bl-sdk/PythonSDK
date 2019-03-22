#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlLookAt(py::module &m)
{
    py::class_< USkelControlLookAt,  USkelControlBase   >(m, "USkelControlLookAt")
        .def_readwrite("TargetLocation", &USkelControlLookAt::TargetLocation)
        .def_readwrite("TargetLocationSpace", &USkelControlLookAt::TargetLocationSpace)
        .def_readwrite("LookAtAxis", &USkelControlLookAt::LookAtAxis)
        .def_readwrite("UpAxis", &USkelControlLookAt::UpAxis)
        .def_readwrite("AllowRotationSpace", &USkelControlLookAt::AllowRotationSpace)
        .def_readwrite("TargetSpaceBoneName", &USkelControlLookAt::TargetSpaceBoneName)
        .def_readwrite("TargetLocationInterpSpeed", &USkelControlLookAt::TargetLocationInterpSpeed)
        .def_readwrite("DesiredTargetLocation", &USkelControlLookAt::DesiredTargetLocation)
        .def_readwrite("ActorSpaceLookAtTarget", &USkelControlLookAt::ActorSpaceLookAtTarget)
        .def_readwrite("MaxAngle", &USkelControlLookAt::MaxAngle)
        .def_readwrite("OuterMaxAngle", &USkelControlLookAt::OuterMaxAngle)
        .def_readwrite("DeadZoneAngle", &USkelControlLookAt::DeadZoneAngle)
        .def_readwrite("RotationAngleRangeX", &USkelControlLookAt::RotationAngleRangeX)
        .def_readwrite("RotationAngleRangeY", &USkelControlLookAt::RotationAngleRangeY)
        .def_readwrite("RotationAngleRangeZ", &USkelControlLookAt::RotationAngleRangeZ)
        .def_readwrite("AllowRotationOtherBoneName", &USkelControlLookAt::AllowRotationOtherBoneName)
        .def_readwrite("LookAtAlpha", &USkelControlLookAt::LookAtAlpha)
        .def_readwrite("LookAtAlphaTarget", &USkelControlLookAt::LookAtAlphaTarget)
        .def_readwrite("LookAtAlphaBlendTimeToGo", &USkelControlLookAt::LookAtAlphaBlendTimeToGo)
        .def_readwrite("LimitLookDir", &USkelControlLookAt::LimitLookDir)
        .def_readwrite("BaseLookDir", &USkelControlLookAt::BaseLookDir)
        .def_readwrite("BaseBonePos", &USkelControlLookAt::BaseBonePos)
        .def_readwrite("LastCalcTime", &USkelControlLookAt::LastCalcTime)
        .def_readwrite("ControlBoneIndex", &USkelControlLookAt::ControlBoneIndex)
        .def("CanLookAtPoint", &USkelControlLookAt::CanLookAtPoint)
        .def("SetLookAtAlpha", &USkelControlLookAt::SetLookAtAlpha)
        .def("InterpolateTargetLocation", &USkelControlLookAt::InterpolateTargetLocation)
        .def("SetTargetLocation", &USkelControlLookAt::SetTargetLocation)
          ;
}