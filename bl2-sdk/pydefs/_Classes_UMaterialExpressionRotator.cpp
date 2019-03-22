#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRotator(py::module &m)
{
    py::class_< UMaterialExpressionRotator,  UMaterialExpression   >(m, "UMaterialExpressionRotator")
        .def_readwrite("Coordinate", &UMaterialExpressionRotator::Coordinate)
        .def_readwrite("Time", &UMaterialExpressionRotator::Time)
        .def_readwrite("CenterX", &UMaterialExpressionRotator::CenterX)
        .def_readwrite("CenterY", &UMaterialExpressionRotator::CenterY)
        .def_readwrite("Speed", &UMaterialExpressionRotator::Speed)
          ;
}