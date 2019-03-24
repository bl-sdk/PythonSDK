#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterMeshSubUV(py::module &m)
{
    py::class_< UMaterialExpressionTextureSampleParameterMeshSubUV,  UMaterialExpressionTextureSampleParameter   >(m, "UMaterialExpressionTextureSampleParameterMeshSubUV")
		.def_static("StaticClass", &UMaterialExpressionTextureSampleParameterMeshSubUV::StaticClass, py::return_value_policy::reference)
          ;
}