#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_TargetsFacingDirection()
{
    py::class_< USearchDirection_TargetsFacingDirection,  USearchDirection   >("USearchDirection_TargetsFacingDirection")
        .def("StaticClass", &USearchDirection_TargetsFacingDirection::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}