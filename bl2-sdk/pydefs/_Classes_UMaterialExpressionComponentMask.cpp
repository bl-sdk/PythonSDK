#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionComponentMask(py::module &m)
{
    py::class_< UMaterialExpressionComponentMask,  UMaterialExpression   >(m, "UMaterialExpressionComponentMask")
		.def_static("StaticClass", &UMaterialExpressionComponentMask::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionComponentMask::Input)
          ;
}