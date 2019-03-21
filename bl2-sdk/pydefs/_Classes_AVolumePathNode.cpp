#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVolumePathNode()
{
    py::class_< AVolumePathNode,  APathNode   >("AVolumePathNode")
        .def_readwrite("StartingRadius", &AVolumePathNode::StartingRadius)
        .def_readwrite("StartingHeight", &AVolumePathNode::StartingHeight)
        .def("StaticClass", &AVolumePathNode::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}