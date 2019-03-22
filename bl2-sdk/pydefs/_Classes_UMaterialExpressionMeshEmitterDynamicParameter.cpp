#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshEmitterDynamicParameter(py::module &m)
{
    py::class_< UMaterialExpressionMeshEmitterDynamicParameter,  UMaterialExpression   >(m, "UMaterialExpressionMeshEmitterDynamicParameter")
        .def_readwrite("ParamNames", &UMaterialExpressionDynamicParameter::ParamNames)
        .def("StaticClass", &UMaterialExpressionMeshEmitterDynamicParameter::StaticClass, py::return_value_policy::reference)
          ;
}