#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDeriveNormalZ(py::module &m)
{
    py::class_< UMaterialExpressionDeriveNormalZ,  UMaterialExpression   >(m, "UMaterialExpressionDeriveNormalZ")
		.def_static("StaticClass", &UMaterialExpressionDeriveNormalZ::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InXY", &UMaterialExpressionDeriveNormalZ::InXY)
          ;
}