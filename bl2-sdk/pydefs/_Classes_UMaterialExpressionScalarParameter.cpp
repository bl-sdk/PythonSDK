#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionScalarParameter(py::module &m)
{
    py::class_< UMaterialExpressionScalarParameter,  UMaterialExpression   >(m, "UMaterialExpressionScalarParameter")
        .def_readwrite("DefaultValue", &UMaterialExpressionScalarParameter::DefaultValue)
        .def_readwrite("ParameterName", &UMaterialExpressionParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionParameter::ExpressionGUID)
          ;
}