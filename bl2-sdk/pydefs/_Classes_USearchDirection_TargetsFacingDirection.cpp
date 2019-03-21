#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_TargetsFacingDirection(py::object m)
{
    py::class_< USearchDirection_TargetsFacingDirection,  USearchDirection   >(m, "USearchDirection_TargetsFacingDirection")
        .def("StaticClass", &USearchDirection_TargetsFacingDirection::StaticClass, py::return_value_policy::reference)
          ;
}