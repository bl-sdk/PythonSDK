#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionExp()
{
    py::class_< UMaterialExpressionExp,  UMaterialExpression   >("UMaterialExpressionExp")
        .def_readwrite("Input", &UMaterialExpressionExp::Input)
        .def("StaticClass", &UMaterialExpressionExp::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}