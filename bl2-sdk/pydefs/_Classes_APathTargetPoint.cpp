#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APathTargetPoint(py::module &m)
{
    py::class_< APathTargetPoint,  AKeypoint   >(m, "APathTargetPoint")
		.def_static("StaticClass", &APathTargetPoint::StaticClass, py::return_value_policy::reference)
        .def("ShouldBeHiddenBySHOW_NavigationNodes", &APathTargetPoint::ShouldBeHiddenBySHOW_NavigationNodes)
          ;
}