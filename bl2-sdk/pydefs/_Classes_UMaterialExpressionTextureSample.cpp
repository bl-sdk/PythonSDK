#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSample(py::module &m)
{
    py::class_< UMaterialExpressionTextureSample,  UMaterialExpression   >(m, "UMaterialExpressionTextureSample")
		.def_static("StaticClass", &UMaterialExpressionTextureSample::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Texture", &UMaterialExpressionTextureSample::Texture)
        .def_readwrite("Coordinates", &UMaterialExpressionTextureSample::Coordinates)
          ;
}