#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCosine(py::module &m)
{
    py::class_< UMaterialExpressionCosine,  UMaterialExpression   >(m, "UMaterialExpressionCosine")
		.def_static("StaticClass", &UMaterialExpressionCosine::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionCosine::Input)
        .def_readwrite("Period", &UMaterialExpressionCosine::Period)
          ;
}