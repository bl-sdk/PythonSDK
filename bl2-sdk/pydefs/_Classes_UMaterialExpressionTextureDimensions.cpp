#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureDimensions(py::object m)
{
    py::class_< UMaterialExpressionTextureDimensions,  UMaterialExpression   >(m, "UMaterialExpressionTextureDimensions")
        .def_readwrite("Texture", &UMaterialExpressionTextureDimensions::Texture)
        .def("StaticClass", &UMaterialExpressionTextureDimensions::StaticClass, py::return_value_policy::reference)
          ;
}