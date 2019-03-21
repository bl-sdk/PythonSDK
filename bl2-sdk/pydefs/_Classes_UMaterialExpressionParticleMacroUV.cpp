#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionParticleMacroUV()
{
    py::class_< UMaterialExpressionParticleMacroUV,  UMaterialExpression   >("UMaterialExpressionParticleMacroUV")
        .def("StaticClass", &UMaterialExpressionParticleMacroUV::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}