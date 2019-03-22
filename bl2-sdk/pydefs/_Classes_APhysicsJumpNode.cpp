#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APhysicsJumpNode(py::module &m)
{
    py::class_< APhysicsJumpNode,  APathNode   >(m, "APhysicsJumpNode")
        .def_readwrite("VfTable_IIGBXNavMeshSpecialMove", &APhysicsJumpNode::VfTable_IIGBXNavMeshSpecialMove)
        .def_readwrite("VfTable_IIGBXNavMeshSeed", &APhysicsJumpNode::VfTable_IIGBXNavMeshSeed)
        .def_readwrite("VfTable_IIGBXNavMeshBuildEvents", &APhysicsJumpNode::VfTable_IIGBXNavMeshBuildEvents)
        .def_readwrite("VfTable_FTickableObject", &APhysicsJumpNode::VfTable_FTickableObject)
        .def_readwrite("Connections", &APhysicsJumpNode::Connections)
        .def_readwrite("OverrideJumpSMD", &APhysicsJumpNode::OverrideJumpSMD)
        .def_readwrite("JumpRadius", &APhysicsJumpNode::JumpRadius)
        .def_readwrite("AllowedTags", &APhysicsJumpNode::AllowedTags)
        .def("StaticClass", &APhysicsJumpNode::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &APhysicsJumpNode::OnToggle)
        .def("GetRotation", &APhysicsJumpNode::GetRotation)
        .def("GetStartRotation", &APhysicsJumpNode::GetStartRotation)
        .def("GetEndRotation", &APhysicsJumpNode::GetEndRotation)
        .def("GetEndLocation", &APhysicsJumpNode::GetEndLocation)
        .def("GetStartLocation", &APhysicsJumpNode::GetStartLocation)
        .def("GetLocation", &APhysicsJumpNode::GetLocation)
        .def("GetPrimaryCollision", &APhysicsJumpNode::GetPrimaryCollision, py::return_value_policy::reference)
        .def("GetJumpDefFromBody", &APhysicsJumpNode::GetJumpDefFromBody, py::return_value_policy::reference)
        .def("RemoveJumpDestination", &APhysicsJumpNode::RemoveJumpDestination)
        .def("AddJumpDestination", &APhysicsJumpNode::AddJumpDestination)
        .def("GetJumpIndex", &APhysicsJumpNode::GetJumpIndex)
          ;
}