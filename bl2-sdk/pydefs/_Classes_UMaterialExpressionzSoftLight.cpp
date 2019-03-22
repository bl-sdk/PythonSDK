#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzSoftLight(py::module &m)
{
    py::class_< UMaterialExpressionzSoftLight,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzSoftLight")
        .def("StaticClass", &UMaterialExpressionzSoftLight::StaticClass, py::return_value_policy::reference)
          ;
}