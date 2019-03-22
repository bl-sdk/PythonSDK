#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBumpOffset(py::module &m)
{
    py::class_< UMaterialExpressionBumpOffset,  UMaterialExpression   >(m, "UMaterialExpressionBumpOffset")
        .def_readwrite("Coordinate", &UMaterialExpressionBumpOffset::Coordinate)
        .def_readwrite("Height", &UMaterialExpressionBumpOffset::Height)
        .def_readwrite("HeightRatio", &UMaterialExpressionBumpOffset::HeightRatio)
        .def_readwrite("ReferencePlane", &UMaterialExpressionBumpOffset::ReferencePlane)
          ;
}