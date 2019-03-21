#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFoliageImpulseDirection(py::object m)
{
    py::class_< UMaterialExpressionFoliageImpulseDirection,  UMaterialExpression   >(m, "UMaterialExpressionFoliageImpulseDirection")
        .def("StaticClass", &UMaterialExpressionFoliageImpulseDirection::StaticClass, py::return_value_policy::reference)
          ;
}