#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzLinearLight(py::object m)
{
    py::class_< UMaterialExpressionzLinearLight,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzLinearLight")
        .def("StaticClass", &UMaterialExpressionzLinearLight::StaticClass, py::return_value_policy::reference)
          ;
}