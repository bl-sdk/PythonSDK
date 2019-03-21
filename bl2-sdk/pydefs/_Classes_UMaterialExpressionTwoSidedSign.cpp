#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTwoSidedSign()
{
    py::class_< UMaterialExpressionTwoSidedSign,  UMaterialExpression   >("UMaterialExpressionTwoSidedSign")
        .def("StaticClass", &UMaterialExpressionTwoSidedSign::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}