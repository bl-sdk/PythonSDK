#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionOcclusionPercentage()
{
    py::class_< UMaterialExpressionOcclusionPercentage,  UMaterialExpression   >("UMaterialExpressionOcclusionPercentage")
        .def("StaticClass", &UMaterialExpressionOcclusionPercentage::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}