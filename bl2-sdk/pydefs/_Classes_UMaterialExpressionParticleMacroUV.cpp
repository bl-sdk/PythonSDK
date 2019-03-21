#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionParticleMacroUV(py::object m)
{
    py::class_< UMaterialExpressionParticleMacroUV,  UMaterialExpression   >(m, "UMaterialExpressionParticleMacroUV")
        .def("StaticClass", &UMaterialExpressionParticleMacroUV::StaticClass, py::return_value_policy::reference)
          ;
}