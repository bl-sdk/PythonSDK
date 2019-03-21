#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTime()
{
    py::class_< UMaterialExpressionTime,  UMaterialExpression   >("UMaterialExpressionTime")
        .def("StaticClass", &UMaterialExpressionTime::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}