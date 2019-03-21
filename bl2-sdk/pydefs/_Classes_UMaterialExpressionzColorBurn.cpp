#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzColorBurn()
{
    py::class_< UMaterialExpressionzColorBurn,  UMaterialExpressionBlendModeBase   >("UMaterialExpressionzColorBurn")
        .def("StaticClass", &UMaterialExpressionzColorBurn::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}