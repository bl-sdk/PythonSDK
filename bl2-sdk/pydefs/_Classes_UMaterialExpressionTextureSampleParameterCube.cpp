#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterCube()
{
    py::class_< UMaterialExpressionTextureSampleParameterCube,  UMaterialExpressionTextureSampleParameter   >("UMaterialExpressionTextureSampleParameterCube")
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterCube::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}