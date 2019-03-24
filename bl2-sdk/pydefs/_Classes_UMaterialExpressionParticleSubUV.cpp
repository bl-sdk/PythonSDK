#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionParticleSubUV(py::module &m)
{
    py::class_< UMaterialExpressionParticleSubUV,  UMaterialExpressionTextureSample   >(m, "UMaterialExpressionParticleSubUV")
		.def_static("StaticClass", &UMaterialExpressionParticleSubUV::StaticClass, py::return_value_policy::reference)
          ;
}