#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldAmbientColor()
{
    py::class_< UMaterialExpressionWorldAmbientColor,  UMaterialExpression   >("UMaterialExpressionWorldAmbientColor")
        .def("StaticClass", &UMaterialExpressionWorldAmbientColor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}