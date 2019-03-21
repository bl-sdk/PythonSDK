#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLightmassReplace()
{
    py::class_< UMaterialExpressionLightmassReplace,  UMaterialExpression   >("UMaterialExpressionLightmassReplace")
        .def_readwrite("Realtime", &UMaterialExpressionLightmassReplace::Realtime)
        .def_readwrite("Lightmass", &UMaterialExpressionLightmassReplace::Lightmass)
        .def("StaticClass", &UMaterialExpressionLightmassReplace::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}