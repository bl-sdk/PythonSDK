#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionVertexColor()
{
    py::class_< UMaterialExpressionVertexColor,  UMaterialExpression   >("UMaterialExpressionVertexColor")
        .def("StaticClass", &UMaterialExpressionVertexColor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}