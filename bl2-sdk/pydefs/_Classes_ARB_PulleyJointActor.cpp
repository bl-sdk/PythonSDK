#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_PulleyJointActor()
{
    py::class_< ARB_PulleyJointActor,  ARB_ConstraintActor   >("ARB_PulleyJointActor")
        .def("StaticClass", &ARB_PulleyJointActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}