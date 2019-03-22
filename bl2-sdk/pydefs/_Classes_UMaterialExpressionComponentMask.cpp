#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionComponentMask(py::module &m)
{
    py::class_< UMaterialExpressionComponentMask,  UMaterialExpression   >(m, "UMaterialExpressionComponentMask")
        .def_readwrite("Input", &UMaterialExpressionComponentMask::Input)
          ;
}