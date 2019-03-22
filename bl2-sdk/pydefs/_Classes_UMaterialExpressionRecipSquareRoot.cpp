#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRecipSquareRoot(py::module &m)
{
    py::class_< UMaterialExpressionRecipSquareRoot,  UMaterialExpression   >(m, "UMaterialExpressionRecipSquareRoot")
        .def_readwrite("Input", &UMaterialExpressionRecipSquareRoot::Input)
          ;
}