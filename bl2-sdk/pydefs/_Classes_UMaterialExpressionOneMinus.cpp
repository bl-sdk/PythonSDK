#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionOneMinus()
{
    py::class_< UMaterialExpressionOneMinus,  UMaterialExpression   >("UMaterialExpressionOneMinus")
        .def_readwrite("Input", &UMaterialExpressionOneMinus::Input)
        .def("StaticClass", &UMaterialExpressionOneMinus::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}