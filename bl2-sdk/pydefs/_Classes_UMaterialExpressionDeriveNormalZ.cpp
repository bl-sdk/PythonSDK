#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDeriveNormalZ()
{
    py::class_< UMaterialExpressionDeriveNormalZ,  UMaterialExpression   >("UMaterialExpressionDeriveNormalZ")
        .def_readwrite("InXY", &UMaterialExpressionDeriveNormalZ::InXY)
        .def("StaticClass", &UMaterialExpressionDeriveNormalZ::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}