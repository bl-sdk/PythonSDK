#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzExclusion()
{
    py::class_< UMaterialExpressionzExclusion,  UMaterialExpressionBlendModeBase   >("UMaterialExpressionzExclusion")
        .def("StaticClass", &UMaterialExpressionzExclusion::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}