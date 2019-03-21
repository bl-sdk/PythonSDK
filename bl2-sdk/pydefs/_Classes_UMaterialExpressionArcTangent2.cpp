#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcTangent2()
{
    py::class_< UMaterialExpressionArcTangent2,  UMaterialExpression   >("UMaterialExpressionArcTangent2")
        .def_readwrite("InputX", &UMaterialExpressionArcTangent2::InputX)
        .def_readwrite("InputY", &UMaterialExpressionArcTangent2::InputY)
        .def("StaticClass", &UMaterialExpressionArcTangent2::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}