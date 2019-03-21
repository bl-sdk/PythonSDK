#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectOrientation()
{
    py::class_< UMaterialExpressionObjectOrientation,  UMaterialExpression   >("UMaterialExpressionObjectOrientation")
        .def("StaticClass", &UMaterialExpressionObjectOrientation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}