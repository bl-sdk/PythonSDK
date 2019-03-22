#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFoliageNormalizedRotationAxisAndAngle(py::module &m)
{
    py::class_< UMaterialExpressionFoliageNormalizedRotationAxisAndAngle,  UMaterialExpression   >(m, "UMaterialExpressionFoliageNormalizedRotationAxisAndAngle")
        .def("StaticClass", &UMaterialExpressionFoliageNormalizedRotationAxisAndAngle::StaticClass, py::return_value_policy::reference)
          ;
}