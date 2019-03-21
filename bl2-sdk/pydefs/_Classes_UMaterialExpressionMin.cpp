#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMin()
{
    py::class_< UMaterialExpressionMin,  UMaterialExpression   >("UMaterialExpressionMin")
        .def_readwrite("A", &UMaterialExpressionMin::A)
        .def_readwrite("B", &UMaterialExpressionMin::B)
        .def("StaticClass", &UMaterialExpressionMin::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}