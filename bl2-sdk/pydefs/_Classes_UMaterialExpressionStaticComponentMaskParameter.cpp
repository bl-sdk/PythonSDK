#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionStaticComponentMaskParameter()
{
    py::class_< UMaterialExpressionStaticComponentMaskParameter,  UMaterialExpressionParameter   >("UMaterialExpressionStaticComponentMaskParameter")
        .def_readwrite("Input", &UMaterialExpressionStaticComponentMaskParameter::Input)
        .def_readwrite("InstanceOverride", &UMaterialExpressionStaticComponentMaskParameter::InstanceOverride)
        .def("StaticClass", &UMaterialExpressionStaticComponentMaskParameter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}