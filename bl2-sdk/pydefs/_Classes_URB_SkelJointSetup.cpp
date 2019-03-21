#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_SkelJointSetup()
{
    py::class_< URB_SkelJointSetup,  URB_ConstraintSetup   >("URB_SkelJointSetup")
        .def("StaticClass", &URB_SkelJointSetup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}