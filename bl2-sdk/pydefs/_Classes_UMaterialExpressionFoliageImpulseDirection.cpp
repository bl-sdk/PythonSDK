#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFoliageImpulseDirection(py::module &m)
{
    py::class_< UMaterialExpressionFoliageImpulseDirection,  UMaterialExpression   >(m, "UMaterialExpressionFoliageImpulseDirection")
		.def_static("StaticClass", &UMaterialExpressionFoliageImpulseDirection::StaticClass, py::return_value_policy::reference)
          ;
}