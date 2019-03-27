#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSquareRoot(py::module &m)
{
    py::class_< UMaterialExpressionSquareRoot,  UMaterialExpression   >(m, "UMaterialExpressionSquareRoot")
		.def_static("StaticClass", &UMaterialExpressionSquareRoot::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionSquareRoot::Input)
          ;
}