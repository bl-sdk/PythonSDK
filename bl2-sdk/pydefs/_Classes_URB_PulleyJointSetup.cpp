#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_PulleyJointSetup()
{
    py::class_< URB_PulleyJointSetup,  URB_ConstraintSetup   >("URB_PulleyJointSetup")
        .def("StaticClass", &URB_PulleyJointSetup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}