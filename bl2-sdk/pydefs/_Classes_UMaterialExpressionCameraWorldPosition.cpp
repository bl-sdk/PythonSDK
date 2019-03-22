#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCameraWorldPosition(py::module &m)
{
    py::class_< UMaterialExpressionCameraWorldPosition,  UMaterialExpression   >(m, "UMaterialExpressionCameraWorldPosition")
          ;
}