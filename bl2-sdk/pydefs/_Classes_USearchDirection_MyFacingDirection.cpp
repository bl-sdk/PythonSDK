#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_MyFacingDirection()
{
    py::class_< USearchDirection_MyFacingDirection,  USearchDirection   >("USearchDirection_MyFacingDirection")
        .def("StaticClass", &USearchDirection_MyFacingDirection::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}