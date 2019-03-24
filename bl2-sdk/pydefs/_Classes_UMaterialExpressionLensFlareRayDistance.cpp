#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareRayDistance(py::module &m)
{
    py::class_< UMaterialExpressionLensFlareRayDistance,  UMaterialExpression   >(m, "UMaterialExpressionLensFlareRayDistance")
		.def_static("StaticClass", &UMaterialExpressionLensFlareRayDistance::StaticClass, py::return_value_policy::reference)
          ;
}