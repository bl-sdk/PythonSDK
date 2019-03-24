#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_OppositeTargetsFacingDirection(py::module &m)
{
    py::class_< USearchDirection_OppositeTargetsFacingDirection,  USearchDirection   >(m, "USearchDirection_OppositeTargetsFacingDirection")
		.def_static("StaticClass", &USearchDirection_OppositeTargetsFacingDirection::StaticClass, py::return_value_policy::reference)
          ;
}