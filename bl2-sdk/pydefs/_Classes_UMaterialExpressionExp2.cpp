#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionExp2(py::module &m)
{
    py::class_< UMaterialExpressionExp2,  UMaterialExpression   >(m, "UMaterialExpressionExp2")
		.def_static("StaticClass", &UMaterialExpressionExp2::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionExp2::Input)
          ;
}