#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcSine(py::module &m)
{
    py::class_< UMaterialExpressionArcSine,  UMaterialExpression   >(m, "UMaterialExpressionArcSine")
		.def_static("StaticClass", &UMaterialExpressionArcSine::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionArcSine::Input)
          ;
}