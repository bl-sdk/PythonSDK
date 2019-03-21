#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_LeavingMoveNode()
{
    class_< USeqEvent_LeavingMoveNode, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_LeavingMoveNode", no_init)
        .def("StaticClass", &USeqEvent_LeavingMoveNode::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}