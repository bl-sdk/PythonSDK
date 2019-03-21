#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCosine()
{
    py::class_< UMaterialExpressionCosine,  UMaterialExpression   >("UMaterialExpressionCosine")
        .def_readwrite("Input", &UMaterialExpressionCosine::Input)
        .def_readwrite("Period", &UMaterialExpressionCosine::Period)
        .def("StaticClass", &UMaterialExpressionCosine::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}