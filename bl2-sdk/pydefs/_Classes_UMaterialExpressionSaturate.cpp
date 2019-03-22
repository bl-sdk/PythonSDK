#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSaturate(py::module &m)
{
    py::class_< UMaterialExpressionSaturate,  UMaterialExpression   >(m, "UMaterialExpressionSaturate")
        .def_readwrite("Input", &UMaterialExpressionSaturate::Input)
        .def("StaticClass", &UMaterialExpressionSaturate::StaticClass, py::return_value_policy::reference)
          ;
}