#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionClamp(py::module &m)
{
    py::class_< UMaterialExpressionClamp,  UMaterialExpression   >(m, "UMaterialExpressionClamp")
		.def_static("StaticClass", &UMaterialExpressionClamp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionClamp::Input)
        .def_readwrite("Min", &UMaterialExpressionClamp::Min)
        .def_readwrite("Max", &UMaterialExpressionClamp::Max)
          ;
}