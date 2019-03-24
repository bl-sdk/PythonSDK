#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareRadialDistance(py::module &m)
{
    py::class_< UMaterialExpressionLensFlareRadialDistance,  UMaterialExpression   >(m, "UMaterialExpressionLensFlareRadialDistance")
		.def_static("StaticClass", &UMaterialExpressionLensFlareRadialDistance::StaticClass, py::return_value_policy::reference)
          ;
}