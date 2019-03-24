#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldAmbientColor(py::module &m)
{
    py::class_< UMaterialExpressionWorldAmbientColor,  UMaterialExpression   >(m, "UMaterialExpressionWorldAmbientColor")
		.def_static("StaticClass", &UMaterialExpressionWorldAmbientColor::StaticClass, py::return_value_policy::reference)
          ;
}