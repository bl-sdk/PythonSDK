#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectOrientation(py::module &m)
{
    py::class_< UMaterialExpressionObjectOrientation,  UMaterialExpression   >(m, "UMaterialExpressionObjectOrientation")
		.def_static("StaticClass", &UMaterialExpressionObjectOrientation::StaticClass, py::return_value_policy::reference)
          ;
}