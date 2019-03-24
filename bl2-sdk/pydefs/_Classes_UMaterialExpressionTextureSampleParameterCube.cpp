#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterCube(py::module &m)
{
    py::class_< UMaterialExpressionTextureSampleParameterCube,  UMaterialExpressionTextureSampleParameter   >(m, "UMaterialExpressionTextureSampleParameterCube")
		.def_static("StaticClass", &UMaterialExpressionTextureSampleParameterCube::StaticClass, py::return_value_policy::reference)
          ;
}