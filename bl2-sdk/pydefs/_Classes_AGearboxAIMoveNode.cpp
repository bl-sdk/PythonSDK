#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGearboxAIMoveNode()
{
    class_< AGearboxAIMoveNode, bases< AActor >  , boost::noncopyable>("AGearboxAIMoveNode", no_init)
        .def_readwrite("NextNodes", &AGearboxAIMoveNode::NextNodes)
        .def_readwrite("PreviousNodes", &AGearboxAIMoveNode::PreviousNodes)
        .def_readwrite("HoldTime", &AGearboxAIMoveNode::HoldTime)
        .def_readwrite("Behaviors", &AGearboxAIMoveNode::Behaviors)
        .def_readwrite("SpecialMoves", &AGearboxAIMoveNode::SpecialMoves)
        .def_readwrite("Sprite", &AGearboxAIMoveNode::Sprite)
        .def("StaticClass", &AGearboxAIMoveNode::StaticClass, return_value_policy< reference_existing_object >())
        .def("DoesPatrolPathExistToPoint", &AGearboxAIMoveNode::DoesPatrolPathExistToPoint)
        .def("GetAllLinkedNodes", &AGearboxAIMoveNode::GetAllLinkedNodes)
        .def("GetNextMoveNodeClosestToPoint", &AGearboxAIMoveNode::GetNextMoveNodeClosestToPoint, return_value_policy< reference_existing_object >())
        .def("GetNextMoveNode", &AGearboxAIMoveNode::GetNextMoveNode, return_value_policy< reference_existing_object >())
        .def("RemoveNode", &AGearboxAIMoveNode::RemoveNode)
        .def("AddNode", &AGearboxAIMoveNode::AddNode)
        .def("ClearLinks", &AGearboxAIMoveNode::ClearLinks)
        .def("OnToggle", &AGearboxAIMoveNode::OnToggle)
        .staticmethod("StaticClass")
  ;
}