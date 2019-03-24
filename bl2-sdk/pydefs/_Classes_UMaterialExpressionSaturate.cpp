#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSaturate(py::module &m)
{
    py::class_< UMaterialExpressionSaturate,  UMaterialExpression   >(m, "UMaterialExpressionSaturate")
		.def_static("StaticClass", &UMaterialExpressionSaturate::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionSaturate::Input)
          ;
}