#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APathNode(py::module &m)
{
    py::class_< APathNode,  ANavigationPoint   >(m, "APathNode")
        .def("eventGetDebugAbbrev", &APathNode::eventGetDebugAbbrev)
          ;
}