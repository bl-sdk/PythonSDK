#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareOcclusion(py::module &m)
{
    py::class_< UMaterialExpressionLensFlareOcclusion,  UMaterialExpression   >(m, "UMaterialExpressionLensFlareOcclusion")
		.def_static("StaticClass", &UMaterialExpressionLensFlareOcclusion::StaticClass, py::return_value_policy::reference)
          ;
}