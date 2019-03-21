#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLog10()
{
    py::class_< UMaterialExpressionLog10,  UMaterialExpression   >("UMaterialExpressionLog10")
        .def_readwrite("Input", &UMaterialExpressionLog10::Input)
        .def("StaticClass", &UMaterialExpressionLog10::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}