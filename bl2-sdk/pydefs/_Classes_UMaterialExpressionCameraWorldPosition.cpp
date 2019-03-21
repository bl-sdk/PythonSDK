#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCameraWorldPosition(py::object m)
{
    py::class_< UMaterialExpressionCameraWorldPosition,  UMaterialExpression   >(m, "UMaterialExpressionCameraWorldPosition")
        .def("StaticClass", &UMaterialExpressionCameraWorldPosition::StaticClass, py::return_value_policy::reference)
          ;
}