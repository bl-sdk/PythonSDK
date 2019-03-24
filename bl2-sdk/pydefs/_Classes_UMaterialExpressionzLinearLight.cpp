#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzLinearLight(py::module &m)
{
    py::class_< UMaterialExpressionzLinearLight,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzLinearLight")
		.def_static("StaticClass", &UMaterialExpressionzLinearLight::StaticClass, py::return_value_policy::reference)
          ;
}