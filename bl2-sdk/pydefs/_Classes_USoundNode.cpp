#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoundNode(py::module &m)
{
    py::class_< USoundNode,  UObject   >(m, "USoundNode")
		.def_static("StaticClass", &USoundNode::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NodeUpdateHint", &USoundNode::NodeUpdateHint)
        .def_readwrite("ChildNodes", &USoundNode::ChildNodes)
          ;
}