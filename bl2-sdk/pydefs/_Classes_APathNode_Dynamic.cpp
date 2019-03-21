#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APathNode_Dynamic(py::object m)
{
    py::class_< APathNode_Dynamic,  APathNode   >(m, "APathNode_Dynamic")
        .def("StaticClass", &APathNode_Dynamic::StaticClass, py::return_value_policy::reference)
        .def("eventGetDebugAbbrev", &APathNode_Dynamic::eventGetDebugAbbrev)
          ;
}