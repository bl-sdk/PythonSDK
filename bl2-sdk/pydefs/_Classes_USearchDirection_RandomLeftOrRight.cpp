#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_RandomLeftOrRight()
{
    py::class_< USearchDirection_RandomLeftOrRight,  USearchDirection   >("USearchDirection_RandomLeftOrRight")
        .def("StaticClass", &USearchDirection_RandomLeftOrRight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}