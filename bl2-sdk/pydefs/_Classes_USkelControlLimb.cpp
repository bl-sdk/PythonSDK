#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControlLimb()
{
    class_< USkelControlLimb, bases< USkelControlBase >  , boost::noncopyable>("USkelControlLimb", no_init)
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
        .def("StaticClass", &USkelControlLimb::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}