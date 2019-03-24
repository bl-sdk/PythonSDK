#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRecipSquareRoot(py::module &m)
{
    py::class_< UMaterialExpressionRecipSquareRoot,  UMaterialExpression   >(m, "UMaterialExpressionRecipSquareRoot")
		.def_static("StaticClass", &UMaterialExpressionRecipSquareRoot::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionRecipSquareRoot::Input)
          ;
}