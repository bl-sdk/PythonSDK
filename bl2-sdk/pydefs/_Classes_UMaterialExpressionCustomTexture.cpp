#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCustomTexture(py::object m)
{
    py::class_< UMaterialExpressionCustomTexture,  UMaterialExpression   >(m, "UMaterialExpressionCustomTexture")
        .def_readwrite("Texture", &UMaterialExpressionCustomTexture::Texture)
        .def("StaticClass", &UMaterialExpressionCustomTexture::StaticClass, py::return_value_policy::reference)
          ;
}