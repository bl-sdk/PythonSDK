#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDynamicParameter()
{
    py::class_< UMaterialExpressionDynamicParameter,  UMaterialExpression   >("UMaterialExpressionDynamicParameter")
        .def_readwrite("ParamNames", &UMaterialExpressionDynamicParameter::ParamNames)
        .def("StaticClass", &UMaterialExpressionDynamicParameter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}