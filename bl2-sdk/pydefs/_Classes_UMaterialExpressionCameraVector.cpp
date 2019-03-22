#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCameraVector(py::module &m)
{
    py::class_< UMaterialExpressionCameraVector,  UMaterialExpression   >(m, "UMaterialExpressionCameraVector")
          ;
}