#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFresnel(py::module &m)
{
    py::class_< UMaterialExpressionFresnel,  UMaterialExpression   >(m, "UMaterialExpressionFresnel")
		.def_static("StaticClass", &UMaterialExpressionFresnel::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Exponent", &UMaterialExpressionFresnel::Exponent)
        .def_readwrite("Normal", &UMaterialExpressionFresnel::Normal)
          ;
}