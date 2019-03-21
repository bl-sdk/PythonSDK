#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRadians()
{
    py::class_< UMaterialExpressionRadians,  UMaterialExpression   >("UMaterialExpressionRadians")
        .def_readwrite("Input", &UMaterialExpressionRadians::Input)
        .def("StaticClass", &UMaterialExpressionRadians::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}