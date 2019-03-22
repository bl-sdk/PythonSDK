#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAbs(py::module &m)
{
    py::class_< UMaterialExpressionAbs,  UMaterialExpression   >(m, "UMaterialExpressionAbs")
        .def_readwrite("Input", &UMaterialExpressionAbs::Input)
        .def("StaticClass", &UMaterialExpressionAbs::StaticClass, py::return_value_policy::reference)
          ;
}