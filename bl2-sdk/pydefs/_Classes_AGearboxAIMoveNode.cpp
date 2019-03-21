#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxAIMoveNode()
{
    py::class_< AGearboxAIMoveNode,  AActor   >("AGearboxAIMoveNode")
        .def_readwrite("NextNodes", &AGearboxAIMoveNode::NextNodes)
        .def_readwrite("PreviousNodes", &AGearboxAIMoveNode::PreviousNodes)
        .def_readwrite("HoldTime", &AGearboxAIMoveNode::HoldTime)
        .def_readwrite("Behaviors", &AGearboxAIMoveNode::Behaviors)
        .def_readwrite("SpecialMoves", &AGearboxAIMoveNode::SpecialMoves)
        .def_readwrite("Sprite", &AGearboxAIMoveNode::Sprite)
        .def("StaticClass", &AGearboxAIMoveNode::StaticClass, py::return_value_policy::reference)
        .def("DoesPatrolPathExistToPoint", &AGearboxAIMoveNode::DoesPatrolPathExistToPoint)
        .def("GetAllLinkedNodes", &AGearboxAIMoveNode::GetAllLinkedNodes)
        .def("GetNextMoveNodeClosestToPoint", &AGearboxAIMoveNode::GetNextMoveNodeClosestToPoint, py::return_value_policy::reference)
        .def("GetNextMoveNode", &AGearboxAIMoveNode::GetNextMoveNode, py::return_value_policy::reference)
        .def("RemoveNode", &AGearboxAIMoveNode::RemoveNode)
        .def("AddNode", &AGearboxAIMoveNode::AddNode)
        .def("ClearLinks", &AGearboxAIMoveNode::ClearLinks)
        .def("OnToggle", &AGearboxAIMoveNode::OnToggle)
        .staticmethod("StaticClass")
  ;
}