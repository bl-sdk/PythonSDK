#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPanner()
{
    py::class_< UMaterialExpressionPanner,  UMaterialExpression   >("UMaterialExpressionPanner")
        .def_readwrite("Coordinate", &UMaterialExpressionPanner::Coordinate)
        .def_readwrite("Time", &UMaterialExpressionPanner::Time)
        .def_readwrite("SpeedX", &UMaterialExpressionPanner::SpeedX)
        .def_readwrite("SpeedY", &UMaterialExpressionPanner::SpeedY)
        .def("StaticClass", &UMaterialExpressionPanner::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}