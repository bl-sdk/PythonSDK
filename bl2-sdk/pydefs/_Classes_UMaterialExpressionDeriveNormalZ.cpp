#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDeriveNormalZ(py::object m)
{
    py::class_< UMaterialExpressionDeriveNormalZ,  UMaterialExpression   >(m, "UMaterialExpressionDeriveNormalZ")
        .def_readwrite("InXY", &UMaterialExpressionDeriveNormalZ::InXY)
        .def("StaticClass", &UMaterialExpressionDeriveNormalZ::StaticClass, py::return_value_policy::reference)
          ;
}