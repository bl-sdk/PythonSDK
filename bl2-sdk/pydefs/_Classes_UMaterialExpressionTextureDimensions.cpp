#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureDimensions(py::module &m)
{
    py::class_< UMaterialExpressionTextureDimensions,  UMaterialExpression   >(m, "UMaterialExpressionTextureDimensions")
		.def_static("StaticClass", &UMaterialExpressionTextureDimensions::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Texture", &UMaterialExpressionTextureDimensions::Texture)
          ;
}