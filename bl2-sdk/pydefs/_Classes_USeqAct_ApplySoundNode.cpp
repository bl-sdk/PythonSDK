#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ApplySoundNode(py::module &m)
{
    py::class_< USeqAct_ApplySoundNode,  USequenceAction   >(m, "USeqAct_ApplySoundNode")
        .def_readwrite("PlaySound", &USeqAct_ApplySoundNode::PlaySound)
        .def_readwrite("ApplyNode", &USeqAct_ApplySoundNode::ApplyNode)
        .def("StaticClass", &USeqAct_ApplySoundNode::StaticClass, py::return_value_policy::reference)
          ;
}