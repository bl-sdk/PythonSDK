#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNodeData()
{
    class_< FNodeData >("FNodeData", no_init)
        .def_readwrite("Node", &FNodeData::Node)
        .def_readwrite("Weight", &FNodeData::Weight)
  ;
}