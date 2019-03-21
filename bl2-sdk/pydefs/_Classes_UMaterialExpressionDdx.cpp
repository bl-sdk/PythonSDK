#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDdx()
{
    py::class_< UMaterialExpressionDdx,  UMaterialExpression   >("UMaterialExpressionDdx")
        .def_readwrite("Input", &UMaterialExpressionDdx::Input)
        .def("StaticClass", &UMaterialExpressionDdx::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}