#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMultiply()
{
    py::class_< UMaterialExpressionMultiply,  UMaterialExpression   >("UMaterialExpressionMultiply")
        .def_readwrite("A", &UMaterialExpressionMultiply::A)
        .def_readwrite("B", &UMaterialExpressionMultiply::B)
        .def("StaticClass", &UMaterialExpressionMultiply::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}