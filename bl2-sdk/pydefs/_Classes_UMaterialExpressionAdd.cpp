#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAdd(py::module &m)
{
    py::class_< UMaterialExpressionAdd,  UMaterialExpression   >(m, "UMaterialExpressionAdd")
        .def_readwrite("A", &UMaterialExpressionAdd::A)
        .def_readwrite("B", &UMaterialExpressionAdd::B)
          ;
}