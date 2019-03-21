#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAdd()
{
    py::class_< UMaterialExpressionAdd,  UMaterialExpression   >("UMaterialExpressionAdd")
        .def_readwrite("A", &UMaterialExpressionAdd::A)
        .def_readwrite("B", &UMaterialExpressionAdd::B)
        .def("StaticClass", &UMaterialExpressionAdd::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}