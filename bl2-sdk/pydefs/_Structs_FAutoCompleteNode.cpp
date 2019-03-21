#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAutoCompleteNode(py::object m)
{
    py::class_< FAutoCompleteNode >(m, "FAutoCompleteNode")
        .def_readwrite("IndexChar", &FAutoCompleteNode::IndexChar)
        .def_readwrite("AutoCompleteListIndices", &FAutoCompleteNode::AutoCompleteListIndices)
        .def_readwrite("ChildNodes", &FAutoCompleteNode::ChildNodes)
  ;
}