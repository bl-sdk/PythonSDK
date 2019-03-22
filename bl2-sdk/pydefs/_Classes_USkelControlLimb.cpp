#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlLimb(py::module &m)
{
    py::class_< USkelControlLimb,  USkelControlBase   >(m, "USkelControlLimb")
        .def_readwrite("EffectorLocation", &USkelControlLimb::EffectorLocation)
        .def_readwrite("EffectorRotation", &USkelControlLimb::EffectorRotation)
        .def_readwrite("EffectorLocationSpace", &USkelControlLimb::EffectorLocationSpace)
        .def_readwrite("JointTargetLocationSpace", &USkelControlLimb::JointTargetLocationSpace)
        .def_readwrite("JointOffsetSpace", &USkelControlLimb::JointOffsetSpace)
        .def_readwrite("BoneAxis", &USkelControlLimb::BoneAxis)
        .def_readwrite("JointAxis", &USkelControlLimb::JointAxis)
        .def_readwrite("EffectorSpaceBoneName", &USkelControlLimb::EffectorSpaceBoneName)
        .def_readwrite("JointTargetLocation", &USkelControlLimb::JointTargetLocation)
        .def_readwrite("JointTargetSpaceBoneName", &USkelControlLimb::JointTargetSpaceBoneName)
        .def_readwrite("JointOffset", &USkelControlLimb::JointOffset)
        .def_readwrite("JointOffsetBoneName", &USkelControlLimb::JointOffsetBoneName)
        .def_readwrite("StretchLimits", &USkelControlLimb::StretchLimits)
        .def_readwrite("StretchRollBoneName", &USkelControlLimb::StretchRollBoneName)
        .def_readwrite("CachedTwistBoneIndex", &USkelControlLimb::CachedTwistBoneIndex)
          ;
}