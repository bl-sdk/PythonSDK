#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFloor(py::module &m)
{
    py::class_< UMaterialExpressionFloor,  UMaterialExpression   >(m, "UMaterialExpressionFloor")
		.def_static("StaticClass", &UMaterialExpressionFloor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionFloor::Input)
          ;
}