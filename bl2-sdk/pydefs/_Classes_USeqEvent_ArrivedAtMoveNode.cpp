#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_ArrivedAtMoveNode()
{
    py::class_< USeqEvent_ArrivedAtMoveNode,  USequenceEvent   >("USeqEvent_ArrivedAtMoveNode")
        .def("StaticClass", &USeqEvent_ArrivedAtMoveNode::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}