#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionParticleSubUV()
{
    py::class_< UMaterialExpressionParticleSubUV,  UMaterialExpressionTextureSample   >("UMaterialExpressionParticleSubUV")
        .def("StaticClass", &UMaterialExpressionParticleSubUV::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}