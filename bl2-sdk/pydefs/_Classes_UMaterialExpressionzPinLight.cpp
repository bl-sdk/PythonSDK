#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzPinLight()
{
    py::class_< UMaterialExpressionzPinLight,  UMaterialExpressionBlendModeBase   >("UMaterialExpressionzPinLight")
        .def("StaticClass", &UMaterialExpressionzPinLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}