#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldPosition()
{
    py::class_< UMaterialExpressionWorldPosition,  UMaterialExpression   >("UMaterialExpressionWorldPosition")
        .def("StaticClass", &UMaterialExpressionWorldPosition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}