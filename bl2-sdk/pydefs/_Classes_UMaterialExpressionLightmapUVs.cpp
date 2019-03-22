#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLightmapUVs(py::module &m)
{
    py::class_< UMaterialExpressionLightmapUVs,  UMaterialExpression   >(m, "UMaterialExpressionLightmapUVs")
          ;
}