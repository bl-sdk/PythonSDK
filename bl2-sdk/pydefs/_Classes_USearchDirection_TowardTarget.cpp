#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_TowardTarget()
{
    py::class_< USearchDirection_TowardTarget,  USearchDirection   >("USearchDirection_TowardTarget")
        .def("StaticClass", &USearchDirection_TowardTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}