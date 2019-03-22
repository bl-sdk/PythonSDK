#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionOneMinus(py::module &m)
{
    py::class_< UMaterialExpressionOneMinus,  UMaterialExpression   >(m, "UMaterialExpressionOneMinus")
        .def_readwrite("Input", &UMaterialExpressionOneMinus::Input)
        .def("StaticClass", &UMaterialExpressionOneMinus::StaticClass, py::return_value_policy::reference)
          ;
}