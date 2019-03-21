#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APathNode()
{
    py::class_< APathNode,  ANavigationPoint   >("APathNode")
        .def("StaticClass", &APathNode::StaticClass, py::return_value_policy::reference)
        .def("eventGetDebugAbbrev", &APathNode::eventGetDebugAbbrev)
        .staticmethod("StaticClass")
  ;
}