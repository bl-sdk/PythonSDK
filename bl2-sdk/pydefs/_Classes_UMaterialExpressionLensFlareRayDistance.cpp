#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareRayDistance(py::module &m)
{
    py::class_< UMaterialExpressionLensFlareRayDistance,  UMaterialExpression   >(m, "UMaterialExpressionLensFlareRayDistance")
        .def("StaticClass", &UMaterialExpressionLensFlareRayDistance::StaticClass, py::return_value_policy::reference)
          ;
}