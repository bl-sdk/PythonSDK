#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDotProduct()
{
    py::class_< UMaterialExpressionDotProduct,  UMaterialExpression   >("UMaterialExpressionDotProduct")
        .def_readwrite("A", &UMaterialExpressionDotProduct::A)
        .def_readwrite("B", &UMaterialExpressionDotProduct::B)
        .def("StaticClass", &UMaterialExpressionDotProduct::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}