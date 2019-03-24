#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDegrees(py::module &m)
{
    py::class_< UMaterialExpressionDegrees,  UMaterialExpression   >(m, "UMaterialExpressionDegrees")
		.def_static("StaticClass", &UMaterialExpressionDegrees::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionDegrees::Input)
          ;
}