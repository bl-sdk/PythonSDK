#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPanner(py::module &m)
{
    py::class_< UMaterialExpressionPanner,  UMaterialExpression   >(m, "UMaterialExpressionPanner")
        .def_readwrite("Coordinate", &UMaterialExpressionPanner::Coordinate)
        .def_readwrite("Time", &UMaterialExpressionPanner::Time)
        .def_readwrite("SpeedX", &UMaterialExpressionPanner::SpeedX)
        .def_readwrite("SpeedY", &UMaterialExpressionPanner::SpeedY)
          ;
}