#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSample()
{
    py::class_< UMaterialExpressionTextureSample,  UMaterialExpression   >("UMaterialExpressionTextureSample")
        .def_readwrite("Texture", &UMaterialExpressionTextureSample::Texture)
        .def_readwrite("Coordinates", &UMaterialExpressionTextureSample::Coordinates)
        .def("StaticClass", &UMaterialExpressionTextureSample::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}