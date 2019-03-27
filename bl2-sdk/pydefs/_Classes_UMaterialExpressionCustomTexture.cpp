#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCustomTexture(py::module &m)
{
    py::class_< UMaterialExpressionCustomTexture,  UMaterialExpression   >(m, "UMaterialExpressionCustomTexture")
		.def_static("StaticClass", &UMaterialExpressionCustomTexture::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Texture", &UMaterialExpressionCustomTexture::Texture)
          ;
}