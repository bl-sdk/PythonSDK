#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant(py::object m)
{
    py::class_< UMaterialExpressionConstant,  UMaterialExpression   >(m, "UMaterialExpressionConstant")
        .def_readwrite("R", &UMaterialExpressionConstant::R)
        .def("StaticClass", &UMaterialExpressionConstant::StaticClass, py::return_value_policy::reference)
          ;
}