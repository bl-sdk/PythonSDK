#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAIDebugDummy()
{
    py::class_< AAIDebugDummy,  AAIDebugDummyBase   >("AAIDebugDummy")
        .def("StaticClass", &AAIDebugDummy::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}