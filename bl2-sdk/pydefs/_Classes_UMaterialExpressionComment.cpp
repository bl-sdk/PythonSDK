#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionComment()
{
    py::class_< UMaterialExpressionComment,  UMaterialExpression   >("UMaterialExpressionComment")
        .def_readwrite("PosX", &UMaterialExpressionComment::PosX)
        .def_readwrite("PosY", &UMaterialExpressionComment::PosY)
        .def_readwrite("SizeX", &UMaterialExpressionComment::SizeX)
        .def_readwrite("SizeY", &UMaterialExpressionComment::SizeY)
        .def_readwrite("Text", &UMaterialExpressionComment::Text)
        .def("StaticClass", &UMaterialExpressionComment::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}