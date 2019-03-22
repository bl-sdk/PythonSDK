#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCeil(py::module &m)
{
    py::class_< UMaterialExpressionCeil,  UMaterialExpression   >(m, "UMaterialExpressionCeil")
        .def_readwrite("Input", &UMaterialExpressionCeil::Input)
          ;
}