#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFluidNormal(py::module &m)
{
    py::class_< UMaterialExpressionFluidNormal,  UMaterialExpression   >(m, "UMaterialExpressionFluidNormal")
		.def_static("StaticClass", &UMaterialExpressionFluidNormal::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Coordinates", &UMaterialExpressionFluidNormal::Coordinates)
          ;
}