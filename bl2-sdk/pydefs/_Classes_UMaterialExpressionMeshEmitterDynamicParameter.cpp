#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshEmitterDynamicParameter()
{
    py::class_< UMaterialExpressionMeshEmitterDynamicParameter,  UMaterialExpression   >("UMaterialExpressionMeshEmitterDynamicParameter")
        .def_readwrite("ParamNames", &UMaterialExpressionDynamicParameter::ParamNames)
        .def("StaticClass", &UMaterialExpressionMeshEmitterDynamicParameter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}