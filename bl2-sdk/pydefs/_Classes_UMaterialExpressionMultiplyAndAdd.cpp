#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMultiplyAndAdd()
{
    py::class_< UMaterialExpressionMultiplyAndAdd,  UMaterialExpression   >("UMaterialExpressionMultiplyAndAdd")
        .def_readwrite("A", &UMaterialExpressionMultiplyAndAdd::A)
        .def_readwrite("B", &UMaterialExpressionMultiplyAndAdd::B)
        .def_readwrite("WeightB", &UMaterialExpressionMultiplyAndAdd::WeightB)
        .def("StaticClass", &UMaterialExpressionMultiplyAndAdd::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}