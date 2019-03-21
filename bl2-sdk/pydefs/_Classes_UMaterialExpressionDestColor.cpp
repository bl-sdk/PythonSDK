#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDestColor()
{
    py::class_< UMaterialExpressionDestColor,  UMaterialExpression   >("UMaterialExpressionDestColor")
        .def("StaticClass", &UMaterialExpressionDestColor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}