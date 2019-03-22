#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstantClamp(py::module &m)
{
    py::class_< UMaterialExpressionConstantClamp,  UMaterialExpression   >(m, "UMaterialExpressionConstantClamp")
        .def_readwrite("Input", &UMaterialExpressionConstantClamp::Input)
        .def_readwrite("Min", &UMaterialExpressionConstantClamp::Min)
        .def_readwrite("Max", &UMaterialExpressionConstantClamp::Max)
        .def("StaticClass", &UMaterialExpressionConstantClamp::StaticClass, py::return_value_policy::reference)
          ;
}