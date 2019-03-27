#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDivide(py::module &m)
{
    py::class_< UMaterialExpressionDivide,  UMaterialExpression   >(m, "UMaterialExpressionDivide")
		.def_static("StaticClass", &UMaterialExpressionDivide::StaticClass, py::return_value_policy::reference)
        .def_readwrite("A", &UMaterialExpressionDivide::A)
        .def_readwrite("B", &UMaterialExpressionDivide::B)
          ;
}