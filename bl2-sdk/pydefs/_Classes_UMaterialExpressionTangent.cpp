#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTangent(py::module &m)
{
    py::class_< UMaterialExpressionTangent,  UMaterialExpression   >(m, "UMaterialExpressionTangent")
        .def_readwrite("Input", &UMaterialExpressionTangent::Input)
          ;
}