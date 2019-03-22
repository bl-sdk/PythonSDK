#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshSubUVBlend(py::module &m)
{
    py::class_< UMaterialExpressionMeshSubUVBlend,  UMaterialExpressionTextureSample   >(m, "UMaterialExpressionMeshSubUVBlend")
        .def("StaticClass", &UMaterialExpressionMeshSubUVBlend::StaticClass, py::return_value_policy::reference)
          ;
}