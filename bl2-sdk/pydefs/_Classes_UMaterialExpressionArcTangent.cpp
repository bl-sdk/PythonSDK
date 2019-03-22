#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcTangent(py::module &m)
{
    py::class_< UMaterialExpressionArcTangent,  UMaterialExpression   >(m, "UMaterialExpressionArcTangent")
        .def_readwrite("Input", &UMaterialExpressionArcTangent::Input)
          ;
}