#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzOverlay()
{
    py::class_< UMaterialExpressionzOverlay,  UMaterialExpressionBlendModeBase   >("UMaterialExpressionzOverlay")
        .def("StaticClass", &UMaterialExpressionzOverlay::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}