#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFrac(py::module &m)
{
    py::class_< UMaterialExpressionFrac,  UMaterialExpression   >(m, "UMaterialExpressionFrac")
        .def_readwrite("Input", &UMaterialExpressionFrac::Input)
          ;
}