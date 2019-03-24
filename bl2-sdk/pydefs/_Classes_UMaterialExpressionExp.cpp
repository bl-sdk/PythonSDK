#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionExp(py::module &m)
{
    py::class_< UMaterialExpressionExp,  UMaterialExpression   >(m, "UMaterialExpressionExp")
		.def_static("StaticClass", &UMaterialExpressionExp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionExp::Input)
          ;
}