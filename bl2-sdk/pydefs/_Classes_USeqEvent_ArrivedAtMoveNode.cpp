#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_ArrivedAtMoveNode(py::object m)
{
    py::class_< USeqEvent_ArrivedAtMoveNode,  USequenceEvent   >(m, "USeqEvent_ArrivedAtMoveNode")
        .def("StaticClass", &USeqEvent_ArrivedAtMoveNode::StaticClass, py::return_value_policy::reference)
          ;
}