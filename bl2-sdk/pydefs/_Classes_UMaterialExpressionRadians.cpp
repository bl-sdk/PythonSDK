#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRadians(py::module &m)
{
    py::class_< UMaterialExpressionRadians,  UMaterialExpression   >(m, "UMaterialExpressionRadians")
		.def_static("StaticClass", &UMaterialExpressionRadians::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionRadians::Input)
          ;
}