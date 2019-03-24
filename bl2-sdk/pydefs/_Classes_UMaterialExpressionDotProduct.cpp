#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDotProduct(py::module &m)
{
    py::class_< UMaterialExpressionDotProduct,  UMaterialExpression   >(m, "UMaterialExpressionDotProduct")
		.def_static("StaticClass", &UMaterialExpressionDotProduct::StaticClass, py::return_value_policy::reference)
        .def_readwrite("A", &UMaterialExpressionDotProduct::A)
        .def_readwrite("B", &UMaterialExpressionDotProduct::B)
          ;
}