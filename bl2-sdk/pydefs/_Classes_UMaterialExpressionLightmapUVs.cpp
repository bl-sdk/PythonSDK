#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLightmapUVs(py::object m)
{
    py::class_< UMaterialExpressionLightmapUVs,  UMaterialExpression   >(m, "UMaterialExpressionLightmapUVs")
        .def("StaticClass", &UMaterialExpressionLightmapUVs::StaticClass, py::return_value_policy::reference)
          ;
}