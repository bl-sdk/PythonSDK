#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLightVector(py::module &m)
{
    py::class_< UMaterialExpressionLightVector,  UMaterialExpression   >(m, "UMaterialExpressionLightVector")
          ;
}