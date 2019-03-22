#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDeriveNormalZ(py::module &m)
{
    py::class_< UMaterialExpressionDeriveNormalZ,  UMaterialExpression   >(m, "UMaterialExpressionDeriveNormalZ")
        .def_readwrite("InXY", &UMaterialExpressionDeriveNormalZ::InXY)
          ;
}