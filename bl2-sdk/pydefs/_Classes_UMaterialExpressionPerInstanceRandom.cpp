#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPerInstanceRandom()
{
    py::class_< UMaterialExpressionPerInstanceRandom,  UMaterialExpression   >("UMaterialExpressionPerInstanceRandom")
        .def("StaticClass", &UMaterialExpressionPerInstanceRandom::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}