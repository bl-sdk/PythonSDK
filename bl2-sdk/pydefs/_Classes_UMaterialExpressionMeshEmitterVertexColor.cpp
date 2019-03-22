#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshEmitterVertexColor(py::module &m)
{
    py::class_< UMaterialExpressionMeshEmitterVertexColor,  UMaterialExpression   >(m, "UMaterialExpressionMeshEmitterVertexColor")
        .def("StaticClass", &UMaterialExpressionMeshEmitterVertexColor::StaticClass, py::return_value_policy::reference)
          ;
}