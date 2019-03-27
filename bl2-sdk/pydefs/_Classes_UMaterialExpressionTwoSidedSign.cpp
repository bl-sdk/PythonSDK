#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTwoSidedSign(py::module &m)
{
    py::class_< UMaterialExpressionTwoSidedSign,  UMaterialExpression   >(m, "UMaterialExpressionTwoSidedSign")
		.def_static("StaticClass", &UMaterialExpressionTwoSidedSign::StaticClass, py::return_value_policy::reference)
          ;
}