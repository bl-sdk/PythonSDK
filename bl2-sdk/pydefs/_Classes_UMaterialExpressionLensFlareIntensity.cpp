#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareIntensity(py::object m)
{
    py::class_< UMaterialExpressionLensFlareIntensity,  UMaterialExpression   >(m, "UMaterialExpressionLensFlareIntensity")
        .def("StaticClass", &UMaterialExpressionLensFlareIntensity::StaticClass, py::return_value_policy::reference)
          ;
}