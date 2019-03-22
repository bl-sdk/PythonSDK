#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcSine(py::module &m)
{
    py::class_< UMaterialExpressionArcSine,  UMaterialExpression   >(m, "UMaterialExpressionArcSine")
        .def_readwrite("Input", &UMaterialExpressionArcSine::Input)
          ;
}