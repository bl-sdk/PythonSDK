#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDotProduct(py::module &m)
{
    py::class_< UMaterialExpressionDotProduct,  UMaterialExpression   >(m, "UMaterialExpressionDotProduct")
        .def_readwrite("A", &UMaterialExpressionDotProduct::A)
        .def_readwrite("B", &UMaterialExpressionDotProduct::B)
          ;
}