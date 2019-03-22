#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterMeshSubUVBlend(py::module &m)
{
    py::class_< UMaterialExpressionTextureSampleParameterMeshSubUVBlend,  UMaterialExpressionTextureSampleParameter   >(m, "UMaterialExpressionTextureSampleParameterMeshSubUVBlend")
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterMeshSubUVBlend::StaticClass, py::return_value_policy::reference)
          ;
}