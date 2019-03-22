#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRadians(py::module &m)
{
    py::class_< UMaterialExpressionRadians,  UMaterialExpression   >(m, "UMaterialExpressionRadians")
        .def_readwrite("Input", &UMaterialExpressionRadians::Input)
          ;
}