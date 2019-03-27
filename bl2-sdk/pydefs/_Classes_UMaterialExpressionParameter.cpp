#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionParameter(py::module &m)
{
    py::class_< UMaterialExpressionParameter,  UMaterialExpression   >(m, "UMaterialExpressionParameter")
		.def_static("StaticClass", &UMaterialExpressionParameter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ParameterName", &UMaterialExpressionParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionParameter::ExpressionGUID)
          ;
}