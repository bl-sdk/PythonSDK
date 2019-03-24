#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTime(py::module &m)
{
    py::class_< UMaterialExpressionTime,  UMaterialExpression   >(m, "UMaterialExpressionTime")
		.def_static("StaticClass", &UMaterialExpressionTime::StaticClass, py::return_value_policy::reference)
          ;
}