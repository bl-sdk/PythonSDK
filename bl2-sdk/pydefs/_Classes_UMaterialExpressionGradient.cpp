#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionGradient(py::object m)
{
    py::class_< UMaterialExpressionGradient,  UMaterialExpression   >(m, "UMaterialExpressionGradient")
        .def_readwrite("Coordinates", &UMaterialExpressionGradient::Coordinates)
        .def_readwrite("GradientStyle", &UMaterialExpressionGradient::GradientStyle)
        .def_readwrite("AddressX", &UMaterialExpressionGradient::AddressX)
        .def_readwrite("AddressY", &UMaterialExpressionGradient::AddressY)
        .def_readwrite("ForegroundColor", &UMaterialExpressionGradient::ForegroundColor)
        .def_readwrite("BackgroundColor", &UMaterialExpressionGradient::BackgroundColor)
        .def_readwrite("ForegroundOffset", &UMaterialExpressionGradient::ForegroundOffset)
        .def_readwrite("BackgroundOffset", &UMaterialExpressionGradient::BackgroundOffset)
        .def("StaticClass", &UMaterialExpressionGradient::StaticClass, py::return_value_policy::reference)
          ;
}