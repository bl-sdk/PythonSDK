#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCeil()
{
    py::class_< UMaterialExpressionCeil,  UMaterialExpression   >("UMaterialExpressionCeil")
        .def_readwrite("Input", &UMaterialExpressionCeil::Input)
        .def("StaticClass", &UMaterialExpressionCeil::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}