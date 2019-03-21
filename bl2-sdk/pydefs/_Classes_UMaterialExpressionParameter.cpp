#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionParameter(py::object m)
{
    py::class_< UMaterialExpressionParameter,  UMaterialExpression   >(m, "UMaterialExpressionParameter")
        .def_readwrite("ParameterName", &UMaterialExpressionParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionParameter::ExpressionGUID)
        .def("StaticClass", &UMaterialExpressionParameter::StaticClass, py::return_value_policy::reference)
          ;
}