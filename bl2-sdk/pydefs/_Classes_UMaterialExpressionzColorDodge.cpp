#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzColorDodge(py::module &m)
{
    py::class_< UMaterialExpressionzColorDodge,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzColorDodge")
		.def_static("StaticClass", &UMaterialExpressionzColorDodge::StaticClass, py::return_value_policy::reference)
          ;
}