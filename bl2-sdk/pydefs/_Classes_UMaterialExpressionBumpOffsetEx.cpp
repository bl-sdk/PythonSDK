#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBumpOffsetEx(py::module &m)
{
    py::class_< UMaterialExpressionBumpOffsetEx,  UMaterialExpression   >(m, "UMaterialExpressionBumpOffsetEx")
        .def_readwrite("Coordinate", &UMaterialExpressionBumpOffsetEx::Coordinate)
        .def_readwrite("Height", &UMaterialExpressionBumpOffsetEx::Height)
        .def_readwrite("HeightRatio", &UMaterialExpressionBumpOffsetEx::HeightRatio)
        .def_readwrite("ReferencePlane", &UMaterialExpressionBumpOffsetEx::ReferencePlane)
          ;
}