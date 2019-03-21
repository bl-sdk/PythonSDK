#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzColorDodge()
{
    py::class_< UMaterialExpressionzColorDodge,  UMaterialExpressionBlendModeBase   >("UMaterialExpressionzColorDodge")
        .def("StaticClass", &UMaterialExpressionzColorDodge::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}