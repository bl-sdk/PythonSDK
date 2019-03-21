#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_BSJointSetup()
{
    py::class_< URB_BSJointSetup,  URB_ConstraintSetup   >("URB_BSJointSetup")
        .def("StaticClass", &URB_BSJointSetup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}