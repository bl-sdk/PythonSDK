#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAppendVector()
{
    py::class_< UMaterialExpressionAppendVector,  UMaterialExpression   >("UMaterialExpressionAppendVector")
        .def_readwrite("A", &UMaterialExpressionAppendVector::A)
        .def_readwrite("B", &UMaterialExpressionAppendVector::B)
        .def("StaticClass", &UMaterialExpressionAppendVector::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}