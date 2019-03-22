#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDdx(py::module &m)
{
    py::class_< UMaterialExpressionDdx,  UMaterialExpression   >(m, "UMaterialExpressionDdx")
        .def_readwrite("Input", &UMaterialExpressionDdx::Input)
        .def("StaticClass", &UMaterialExpressionDdx::StaticClass, py::return_value_policy::reference)
          ;
}