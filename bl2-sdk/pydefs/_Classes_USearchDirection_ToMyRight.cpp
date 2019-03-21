#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_ToMyRight()
{
    py::class_< USearchDirection_ToMyRight,  USearchDirection   >("USearchDirection_ToMyRight")
        .def("StaticClass", &USearchDirection_ToMyRight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}