#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMax(py::module &m)
{
    py::class_< UMaterialExpressionMax,  UMaterialExpression   >(m, "UMaterialExpressionMax")
		.def_static("StaticClass", &UMaterialExpressionMax::StaticClass, py::return_value_policy::reference)
        .def_readwrite("A", &UMaterialExpressionMax::A)
        .def_readwrite("B", &UMaterialExpressionMax::B)
          ;
}