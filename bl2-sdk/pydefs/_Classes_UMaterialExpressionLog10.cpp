#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLog10(py::module &m)
{
    py::class_< UMaterialExpressionLog10,  UMaterialExpression   >(m, "UMaterialExpressionLog10")
        .def_readwrite("Input", &UMaterialExpressionLog10::Input)
          ;
}