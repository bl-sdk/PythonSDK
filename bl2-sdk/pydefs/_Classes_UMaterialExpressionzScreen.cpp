#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzScreen()
{
    py::class_< UMaterialExpressionzScreen,  UMaterialExpressionBlendModeBase   >("UMaterialExpressionzScreen")
        .def("StaticClass", &UMaterialExpressionzScreen::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}