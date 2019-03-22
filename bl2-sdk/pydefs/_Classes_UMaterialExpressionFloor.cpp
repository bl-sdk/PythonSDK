#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFloor(py::module &m)
{
    py::class_< UMaterialExpressionFloor,  UMaterialExpression   >(m, "UMaterialExpressionFloor")
        .def_readwrite("Input", &UMaterialExpressionFloor::Input)
          ;
}