#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_LeavingMoveNode()
{
    py::class_< USeqEvent_LeavingMoveNode,  USequenceEvent   >("USeqEvent_LeavingMoveNode")
        .def("StaticClass", &USeqEvent_LeavingMoveNode::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}