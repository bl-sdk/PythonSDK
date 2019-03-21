#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APathTargetPoint()
{
    py::class_< APathTargetPoint,  AKeypoint   >("APathTargetPoint")
        .def("StaticClass", &APathTargetPoint::StaticClass, py::return_value_policy::reference)
        .def("ShouldBeHiddenBySHOW_NavigationNodes", &APathTargetPoint::ShouldBeHiddenBySHOW_NavigationNodes)
        .staticmethod("StaticClass")
  ;
}