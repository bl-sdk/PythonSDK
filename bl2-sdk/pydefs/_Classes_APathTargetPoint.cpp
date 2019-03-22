#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APathTargetPoint(py::module &m)
{
    py::class_< APathTargetPoint,  AKeypoint   >(m, "APathTargetPoint")
        .def("ShouldBeHiddenBySHOW_NavigationNodes", &APathTargetPoint::ShouldBeHiddenBySHOW_NavigationNodes)
          ;
}