#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDdy()
{
    py::class_< UMaterialExpressionDdy,  UMaterialExpression   >("UMaterialExpressionDdy")
        .def_readwrite("Input", &UMaterialExpressionDdy::Input)
        .def("StaticClass", &UMaterialExpressionDdy::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}