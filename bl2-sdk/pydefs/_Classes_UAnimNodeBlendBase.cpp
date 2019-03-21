#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendBase()
{
    class_< UAnimNodeBlendBase, bases< UObject >  , boost::noncopyable>("UAnimNodeBlendBase", no_init)
        .def_readwrite("Children", &UAnimNodeBlendBase::Children)
        .def_readwrite("BlendType", &UAnimNodeBlendBase::BlendType)
        .def_readwrite("NodeTickTag", &UAnimNode::NodeTickTag)
        .def_readwrite("NodeInitTag", &UAnimNode::NodeInitTag)
        .def_readwrite("TickArrayIndex", &UAnimNode::TickArrayIndex)
        .def_readwrite("NodeCachedAtomsTag", &UAnimNode::NodeCachedAtomsTag)
        .def_readwrite("NodeTotalWeight", &UAnimNode::NodeTotalWeight)
        .def_readwrite("ParentNodes", &UAnimNode::ParentNodes)
        .def_readwrite("NodeName", &UAnimNode::NodeName)
        .def_readwrite("CachedBoneAtoms", &UAnimNode::CachedBoneAtoms)
        .def_readwrite("CachedNumDesiredBones", &UAnimNode::CachedNumDesiredBones)
        .def_readonly("UnknownData00", &UAnimNode::UnknownData00)
        .def_readwrite("CachedRootMotionDelta", &UAnimNode::CachedRootMotionDelta)
        .def_readwrite("bCachedHasRootMotion", &UAnimNode::bCachedHasRootMotion)
        .def_readwrite("CachedCurveKeys", &UAnimNode::CachedCurveKeys)
        .def_readwrite("SearchTag", &UAnimNode::SearchTag)
        .def_readwrite("SkelComponent", &UAnimObject::SkelComponent)
        .def("StaticClass", &UAnimNodeBlendBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("ReplayAnim", &UAnimNodeBlendBase::ReplayAnim)
        .def("StopAnim", &UAnimNodeBlendBase::StopAnim)
        .def("PlayAnim", &UAnimNodeBlendBase::PlayAnim)
        .def("FindAllAnimNodes", &UAnimNode::FindAllAnimNodes)
        .def("FindAnimNode", &UAnimNode::FindAnimNode, return_value_policy< reference_existing_object >())
        .def("eventOnCeaseRelevant", &UAnimNode::eventOnCeaseRelevant)
        .def("eventOnBecomeRelevant", &UAnimNode::eventOnBecomeRelevant)
        .def("eventOnInit", &UAnimNode::eventOnInit)
        .staticmethod("StaticClass")
  ;
}