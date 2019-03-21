#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterNormal(py::object m)
{
    py::class_< UMaterialExpressionTextureSampleParameterNormal,  UMaterialExpressionTextureSampleParameter   >(m, "UMaterialExpressionTextureSampleParameterNormal")
        .def_readwrite("InstanceOverride", &UMaterialExpressionTextureSampleParameterNormal::InstanceOverride)
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterNormal::StaticClass, py::return_value_policy::reference)
          ;
}