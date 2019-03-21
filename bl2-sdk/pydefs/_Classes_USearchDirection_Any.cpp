#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_Any()
{
    py::class_< USearchDirection_Any,  USearchDirection   >("USearchDirection_Any")
        .def("StaticClass", &USearchDirection_Any::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}