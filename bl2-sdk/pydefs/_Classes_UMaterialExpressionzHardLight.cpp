#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzHardLight(py::object m)
{
    py::class_< UMaterialExpressionzHardLight,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzHardLight")
        .def("StaticClass", &UMaterialExpressionzHardLight::StaticClass, py::return_value_policy::reference)
          ;
}