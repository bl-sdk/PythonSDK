#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterSubUV(py::module &m)
{
    py::class_< UMaterialExpressionTextureSampleParameterSubUV,  UMaterialExpressionTextureSampleParameter2D   >(m, "UMaterialExpressionTextureSampleParameterSubUV")
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterSubUV::StaticClass, py::return_value_policy::reference)
          ;
}