#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcSine(py::object m)
{
    py::class_< UMaterialExpressionArcSine,  UMaterialExpression   >(m, "UMaterialExpressionArcSine")
        .def_readwrite("Input", &UMaterialExpressionArcSine::Input)
        .def("StaticClass", &UMaterialExpressionArcSine::StaticClass, py::return_value_policy::reference)
          ;
}