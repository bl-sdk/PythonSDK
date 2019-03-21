#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzVividLight(py::object m)
{
    py::class_< UMaterialExpressionzVividLight,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzVividLight")
        .def("StaticClass", &UMaterialExpressionzVividLight::StaticClass, py::return_value_policy::reference)
          ;
}