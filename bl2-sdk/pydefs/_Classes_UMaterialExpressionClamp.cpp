#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionClamp(py::object m)
{
    py::class_< UMaterialExpressionClamp,  UMaterialExpression   >(m, "UMaterialExpressionClamp")
        .def_readwrite("Input", &UMaterialExpressionClamp::Input)
        .def_readwrite("Min", &UMaterialExpressionClamp::Min)
        .def_readwrite("Max", &UMaterialExpressionClamp::Max)
        .def("StaticClass", &UMaterialExpressionClamp::StaticClass, py::return_value_policy::reference)
          ;
}