#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzLinearLight()
{
    py::class_< UMaterialExpressionzLinearLight,  UMaterialExpressionBlendModeBase   >("UMaterialExpressionzLinearLight")
        .def("StaticClass", &UMaterialExpressionzLinearLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}