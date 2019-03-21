#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAutoCompleteNode()
{
    class_< FAutoCompleteNode >("FAutoCompleteNode", no_init)
        .def_readwrite("IndexChar", &FAutoCompleteNode::IndexChar)
        .def_readwrite("AutoCompleteListIndices", &FAutoCompleteNode::AutoCompleteListIndices)
        .def_readwrite("ChildNodes", &FAutoCompleteNode::ChildNodes)
  ;
}