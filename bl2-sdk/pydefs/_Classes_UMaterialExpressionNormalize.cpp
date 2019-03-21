#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionNormalize()
{
    py::class_< UMaterialExpressionNormalize,  UMaterialExpression   >("UMaterialExpressionNormalize")
        .def_readwrite("VectorInput", &UMaterialExpressionNormalize::VectorInput)
        .def("StaticClass", &UMaterialExpressionNormalize::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}