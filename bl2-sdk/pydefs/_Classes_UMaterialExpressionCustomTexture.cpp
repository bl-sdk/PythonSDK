#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCustomTexture()
{
    py::class_< UMaterialExpressionCustomTexture,  UMaterialExpression   >("UMaterialExpressionCustomTexture")
        .def_readwrite("Texture", &UMaterialExpressionCustomTexture::Texture)
        .def("StaticClass", &UMaterialExpressionCustomTexture::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}