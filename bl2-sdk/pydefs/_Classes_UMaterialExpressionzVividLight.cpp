#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzVividLight()
{
    py::class_< UMaterialExpressionzVividLight,  UMaterialExpressionBlendModeBase   >("UMaterialExpressionzVividLight")
        .def("StaticClass", &UMaterialExpressionzVividLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}