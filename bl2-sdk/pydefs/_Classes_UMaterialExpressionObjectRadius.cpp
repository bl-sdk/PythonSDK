#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectRadius()
{
    py::class_< UMaterialExpressionObjectRadius,  UMaterialExpression   >("UMaterialExpressionObjectRadius")
        .def("StaticClass", &UMaterialExpressionObjectRadius::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}