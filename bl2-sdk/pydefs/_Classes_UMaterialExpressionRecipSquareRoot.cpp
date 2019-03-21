#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRecipSquareRoot()
{
    py::class_< UMaterialExpressionRecipSquareRoot,  UMaterialExpression   >("UMaterialExpressionRecipSquareRoot")
        .def_readwrite("Input", &UMaterialExpressionRecipSquareRoot::Input)
        .def("StaticClass", &UMaterialExpressionRecipSquareRoot::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}