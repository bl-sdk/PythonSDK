#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionScreenPosition()
{
    py::class_< UMaterialExpressionScreenPosition,  UMaterialExpression   >("UMaterialExpressionScreenPosition")
        .def("StaticClass", &UMaterialExpressionScreenPosition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}