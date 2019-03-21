#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_StayUprightSetup()
{
    py::class_< URB_StayUprightSetup,  URB_ConstraintSetup   >("URB_StayUprightSetup")
        .def("StaticClass", &URB_StayUprightSetup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}