#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionStaticSwitchParameter(py::object m)
{
    py::class_< UMaterialExpressionStaticSwitchParameter,  UMaterialExpressionParameter   >(m, "UMaterialExpressionStaticSwitchParameter")
        .def_readwrite("A", &UMaterialExpressionStaticSwitchParameter::A)
        .def_readwrite("B", &UMaterialExpressionStaticSwitchParameter::B)
        .def_readwrite("InstanceOverride", &UMaterialExpressionStaticSwitchParameter::InstanceOverride)
        .def("StaticClass", &UMaterialExpressionStaticSwitchParameter::StaticClass, py::return_value_policy::reference)
          ;
}