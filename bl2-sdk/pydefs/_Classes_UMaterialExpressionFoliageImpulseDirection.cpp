#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFoliageImpulseDirection(py::module &m)
{
    py::class_< UMaterialExpressionFoliageImpulseDirection,  UMaterialExpression   >(m, "UMaterialExpressionFoliageImpulseDirection")
          ;
}