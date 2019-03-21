#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendBase(py::object m)
{
    py::class_< UAnimNodeBlendBase,  UObject   >(m, "UAnimNodeBlendBase")
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
        .def("StaticClass", &UAnimNodeBlendBase::StaticClass, py::return_value_policy::reference)
        .def("ReplayAnim", &UAnimNodeBlendBase::ReplayAnim)
        .def("StopAnim", &UAnimNodeBlendBase::StopAnim)
        .def("PlayAnim", &UAnimNodeBlendBase::PlayAnim)
        .def("FindAllAnimNodes", &UAnimNode::FindAllAnimNodes)
        .def("FindAnimNode", &UAnimNode::FindAnimNode, py::return_value_policy::reference)
        .def("eventOnCeaseRelevant", &UAnimNode::eventOnCeaseRelevant)
        .def("eventOnBecomeRelevant", &UAnimNode::eventOnBecomeRelevant)
        .def("eventOnInit", &UAnimNode::eventOnInit)
          ;
}