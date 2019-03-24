#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareSourceDistance(py::module &m)
{
    py::class_< UMaterialExpressionLensFlareSourceDistance,  UMaterialExpression   >(m, "UMaterialExpressionLensFlareSourceDistance")
		.def_static("StaticClass", &UMaterialExpressionLensFlareSourceDistance::StaticClass, py::return_value_policy::reference)
          ;
}