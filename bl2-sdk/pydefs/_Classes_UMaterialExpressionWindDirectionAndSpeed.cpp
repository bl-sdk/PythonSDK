#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWindDirectionAndSpeed()
{
    py::class_< UMaterialExpressionWindDirectionAndSpeed,  UMaterialExpression   >("UMaterialExpressionWindDirectionAndSpeed")
        .def("StaticClass", &UMaterialExpressionWindDirectionAndSpeed::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}