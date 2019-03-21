#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLog2(py::object m)
{
    py::class_< UMaterialExpressionLog2,  UMaterialExpression   >(m, "UMaterialExpressionLog2")
        .def_readwrite("Input", &UMaterialExpressionLog2::Input)
        .def("StaticClass", &UMaterialExpressionLog2::StaticClass, py::return_value_policy::reference)
          ;
}