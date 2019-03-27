#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameter2D(py::module &m)
{
    py::class_< UMaterialExpressionTextureSampleParameter2D,  UMaterialExpressionTextureSampleParameter   >(m, "UMaterialExpressionTextureSampleParameter2D")
		.def_static("StaticClass", &UMaterialExpressionTextureSampleParameter2D::StaticClass, py::return_value_policy::reference)
          ;
}