#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant()
{
    py::class_< UMaterialExpressionConstant,  UMaterialExpression   >("UMaterialExpressionConstant")
        .def_readwrite("R", &UMaterialExpressionConstant::R)
        .def("StaticClass", &UMaterialExpressionConstant::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}