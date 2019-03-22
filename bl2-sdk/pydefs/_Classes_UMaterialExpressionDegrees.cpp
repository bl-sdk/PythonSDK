#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDegrees(py::module &m)
{
    py::class_< UMaterialExpressionDegrees,  UMaterialExpression   >(m, "UMaterialExpressionDegrees")
        .def_readwrite("Input", &UMaterialExpressionDegrees::Input)
        .def("StaticClass", &UMaterialExpressionDegrees::StaticClass, py::return_value_policy::reference)
          ;
}