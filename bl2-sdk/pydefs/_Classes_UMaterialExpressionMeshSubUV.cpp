#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshSubUV(py::module &m)
{
    py::class_< UMaterialExpressionMeshSubUV,  UMaterialExpressionTextureSample   >(m, "UMaterialExpressionMeshSubUV")
          ;
}