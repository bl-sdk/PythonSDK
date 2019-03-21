#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_TowardMe()
{
    py::class_< USearchDirection_TowardMe,  USearchDirection   >("USearchDirection_TowardMe")
        .def("StaticClass", &USearchDirection_TowardMe::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}