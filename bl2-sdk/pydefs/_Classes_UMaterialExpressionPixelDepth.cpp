#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPixelDepth()
{
    py::class_< UMaterialExpressionPixelDepth,  UMaterialExpression   >("UMaterialExpressionPixelDepth")
        .def("StaticClass", &UMaterialExpressionPixelDepth::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}