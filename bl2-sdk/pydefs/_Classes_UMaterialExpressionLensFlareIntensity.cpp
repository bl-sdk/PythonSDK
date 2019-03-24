#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareIntensity(py::module &m)
{
    py::class_< UMaterialExpressionLensFlareIntensity,  UMaterialExpression   >(m, "UMaterialExpressionLensFlareIntensity")
		.def_static("StaticClass", &UMaterialExpressionLensFlareIntensity::StaticClass, py::return_value_policy::reference)
          ;
}