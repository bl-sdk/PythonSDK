#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFoliageImpulseDirection()
{
    py::class_< UMaterialExpressionFoliageImpulseDirection,  UMaterialExpression   >("UMaterialExpressionFoliageImpulseDirection")
        .def("StaticClass", &UMaterialExpressionFoliageImpulseDirection::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}