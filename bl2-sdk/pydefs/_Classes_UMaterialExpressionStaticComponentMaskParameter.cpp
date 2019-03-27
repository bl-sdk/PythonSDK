#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionStaticComponentMaskParameter(py::module &m)
{
    py::class_< UMaterialExpressionStaticComponentMaskParameter,  UMaterialExpressionParameter   >(m, "UMaterialExpressionStaticComponentMaskParameter")
		.def_static("StaticClass", &UMaterialExpressionStaticComponentMaskParameter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionStaticComponentMaskParameter::Input)
        .def_readwrite("InstanceOverride", &UMaterialExpressionStaticComponentMaskParameter::InstanceOverride)
          ;
}