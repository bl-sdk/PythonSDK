#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionScalarParameter()
{
    py::class_< UMaterialExpressionScalarParameter,  UMaterialExpression   >("UMaterialExpressionScalarParameter")
        .def_readwrite("DefaultValue", &UMaterialExpressionScalarParameter::DefaultValue)
        .def_readwrite("ParameterName", &UMaterialExpressionParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionParameter::ExpressionGUID)
        .def("StaticClass", &UMaterialExpressionScalarParameter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}