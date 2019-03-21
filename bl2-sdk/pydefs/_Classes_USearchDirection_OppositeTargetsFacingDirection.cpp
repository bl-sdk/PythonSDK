#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_OppositeTargetsFacingDirection()
{
    py::class_< USearchDirection_OppositeTargetsFacingDirection,  USearchDirection   >("USearchDirection_OppositeTargetsFacingDirection")
        .def("StaticClass", &USearchDirection_OppositeTargetsFacingDirection::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}