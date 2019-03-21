#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_MyFacingDirection(py::object m)
{
    py::class_< USearchDirection_MyFacingDirection,  USearchDirection   >(m, "USearchDirection_MyFacingDirection")
        .def("StaticClass", &USearchDirection_MyFacingDirection::StaticClass, py::return_value_policy::reference)
          ;
}