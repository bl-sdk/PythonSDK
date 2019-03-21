#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_BSJointActor()
{
    py::class_< ARB_BSJointActor,  ARB_ConstraintActor   >("ARB_BSJointActor")
        .def("StaticClass", &ARB_BSJointActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}