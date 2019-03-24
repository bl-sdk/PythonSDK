#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionOcclusionPercentage(py::module &m)
{
    py::class_< UMaterialExpressionOcclusionPercentage,  UMaterialExpression   >(m, "UMaterialExpressionOcclusionPercentage")
		.def_static("StaticClass", &UMaterialExpressionOcclusionPercentage::StaticClass, py::return_value_policy::reference)
          ;
}