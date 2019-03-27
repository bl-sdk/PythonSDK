#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSceneDepth(py::module &m)
{
    py::class_< UMaterialExpressionSceneDepth,  UMaterialExpression   >(m, "UMaterialExpressionSceneDepth")
		.def_static("StaticClass", &UMaterialExpressionSceneDepth::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Coordinates", &UMaterialExpressionSceneDepth::Coordinates)
          ;
}