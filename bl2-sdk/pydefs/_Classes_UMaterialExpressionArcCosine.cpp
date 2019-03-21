#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcCosine(py::object m)
{
    py::class_< UMaterialExpressionArcCosine,  UMaterialExpression   >(m, "UMaterialExpressionArcCosine")
        .def_readwrite("Input", &UMaterialExpressionArcCosine::Input)
        .def("StaticClass", &UMaterialExpressionArcCosine::StaticClass, py::return_value_policy::reference)
          ;
}