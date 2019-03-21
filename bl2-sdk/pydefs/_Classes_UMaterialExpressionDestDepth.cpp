#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDestDepth()
{
    py::class_< UMaterialExpressionDestDepth,  UMaterialExpression   >("UMaterialExpressionDestDepth")
        .def("StaticClass", &UMaterialExpressionDestDepth::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}