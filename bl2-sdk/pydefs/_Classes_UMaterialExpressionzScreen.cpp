#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzScreen(py::object m)
{
    py::class_< UMaterialExpressionzScreen,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzScreen")
        .def("StaticClass", &UMaterialExpressionzScreen::StaticClass, py::return_value_policy::reference)
          ;
}