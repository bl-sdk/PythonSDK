#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcTangent()
{
    py::class_< UMaterialExpressionArcTangent,  UMaterialExpression   >("UMaterialExpressionArcTangent")
        .def_readwrite("Input", &UMaterialExpressionArcTangent::Input)
        .def("StaticClass", &UMaterialExpressionArcTangent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}