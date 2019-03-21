#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectWorldPosition()
{
    py::class_< UMaterialExpressionObjectWorldPosition,  UMaterialExpression   >("UMaterialExpressionObjectWorldPosition")
        .def("StaticClass", &UMaterialExpressionObjectWorldPosition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}