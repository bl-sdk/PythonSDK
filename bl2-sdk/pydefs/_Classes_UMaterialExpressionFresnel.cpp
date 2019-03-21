#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFresnel()
{
    py::class_< UMaterialExpressionFresnel,  UMaterialExpression   >("UMaterialExpressionFresnel")
        .def_readwrite("Exponent", &UMaterialExpressionFresnel::Exponent)
        .def_readwrite("Normal", &UMaterialExpressionFresnel::Normal)
        .def("StaticClass", &UMaterialExpressionFresnel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}