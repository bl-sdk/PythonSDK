#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzHardLight()
{
    py::class_< UMaterialExpressionzHardLight,  UMaterialExpressionBlendModeBase   >("UMaterialExpressionzHardLight")
        .def("StaticClass", &UMaterialExpressionzHardLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}