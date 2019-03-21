#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionVectorIf(py::object m)
{
    py::class_< UMaterialExpressionVectorIf,  UMaterialExpression   >(m, "UMaterialExpressionVectorIf")
        .def_readwrite("A", &UMaterialExpressionVectorIf::A)
        .def_readwrite("B", &UMaterialExpressionVectorIf::B)
        .def_readwrite("IfTrue", &UMaterialExpressionVectorIf::IfTrue)
        .def_readwrite("IfFalse", &UMaterialExpressionVectorIf::IfFalse)
        .def_readwrite("CompareFunc", &UMaterialExpressionVectorIf::CompareFunc)
        .def("StaticClass", &UMaterialExpressionVectorIf::StaticClass, py::return_value_policy::reference)
          ;
}