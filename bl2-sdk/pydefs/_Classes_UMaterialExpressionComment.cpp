#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionComment(py::module &m)
{
    py::class_< UMaterialExpressionComment,  UMaterialExpression   >(m, "UMaterialExpressionComment")
		.def_static("StaticClass", &UMaterialExpressionComment::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PosX", &UMaterialExpressionComment::PosX)
        .def_readwrite("PosY", &UMaterialExpressionComment::PosY)
        .def_readwrite("SizeX", &UMaterialExpressionComment::SizeX)
        .def_readwrite("SizeY", &UMaterialExpressionComment::SizeY)
        .def_readwrite("Text", &UMaterialExpressionComment::Text)
          ;
}