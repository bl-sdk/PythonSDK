#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshEmitterVertexColor()
{
    py::class_< UMaterialExpressionMeshEmitterVertexColor,  UMaterialExpression   >("UMaterialExpressionMeshEmitterVertexColor")
        .def("StaticClass", &UMaterialExpressionMeshEmitterVertexColor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}