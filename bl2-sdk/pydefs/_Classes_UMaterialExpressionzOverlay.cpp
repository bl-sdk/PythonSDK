#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzOverlay(py::module &m)
{
    py::class_< UMaterialExpressionzOverlay,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzOverlay")
        .def("StaticClass", &UMaterialExpressionzOverlay::StaticClass, py::return_value_policy::reference)
          ;
}