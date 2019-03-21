#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTangent()
{
    py::class_< UMaterialExpressionTangent,  UMaterialExpression   >("UMaterialExpressionTangent")
        .def_readwrite("Input", &UMaterialExpressionTangent::Input)
        .def("StaticClass", &UMaterialExpressionTangent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}