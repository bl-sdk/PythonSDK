#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFloor()
{
    py::class_< UMaterialExpressionFloor,  UMaterialExpression   >("UMaterialExpressionFloor")
        .def_readwrite("Input", &UMaterialExpressionFloor::Input)
        .def("StaticClass", &UMaterialExpressionFloor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}