#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_AwayFromMe()
{
    py::class_< USearchDirection_AwayFromMe,  USearchDirection   >("USearchDirection_AwayFromMe")
        .def("StaticClass", &USearchDirection_AwayFromMe::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}