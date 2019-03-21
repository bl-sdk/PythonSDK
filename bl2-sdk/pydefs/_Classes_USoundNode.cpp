#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USoundNode()
{
    class_< USoundNode, bases< UObject >  , boost::noncopyable>("USoundNode", no_init)
        .def_readwrite("NodeUpdateHint", &USoundNode::NodeUpdateHint)
        .def_readwrite("ChildNodes", &USoundNode::ChildNodes)
        .def("StaticClass", &USoundNode::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}