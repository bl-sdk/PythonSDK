#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLinearInterpolate(py::module &m)
{
    py::class_< UMaterialExpressionLinearInterpolate,  UMaterialExpression   >(m, "UMaterialExpressionLinearInterpolate")
        .def_readwrite("A", &UMaterialExpressionLinearInterpolate::A)
        .def_readwrite("B", &UMaterialExpressionLinearInterpolate::B)
        .def_readwrite("Alpha", &UMaterialExpressionLinearInterpolate::Alpha)
          ;
}